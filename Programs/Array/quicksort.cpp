#include <bits/stdc++.h>
using namespace std;

/*int partition(int arr[], int first, int last)
{
    int pivot = arr[last];
    int i = first - 1;
    for (int j = first; j < last; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
           int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[last];
    arr[last] = temp;
    return (i + 1);
}*/
 int partition(int arr[], int first, int last) {
        int pivot = arr[last];
        int i = first;

        for (int j = first; j < last; j++) {
            if (arr[j] <= pivot) {
                swap(arr[i], arr[j]);
                i++;
            }
        }
        swap(arr[i], arr[last]);
        return i;
    }

void quicksort(int a[], int s, int e)
{
    if (e <= s)
        return;
    int pivot = partition(a, s, e);
    quicksort(a, s, pivot - 1);
    quicksort(a, pivot + 1, e);
}

int main()
{
    int a[] = {3, 7, 9, 4, 1, 1};
    quicksort(a, 0, sizeof(a) / sizeof(a[0]));
    for (auto i : a)
    {
        cout << i << " ";
    }
}
