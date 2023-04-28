class Solution {
public:
    int minDeletions(string s) {
        int arr[26];
        memset(arr, 0, sizeof(arr));
        
        for(char& c : s) arr[c - 'a']++;
        
        unordered_set<int> visited;
        int ans = 0;
        
        for(int i=0; i<26; ++i) {
            if(!arr[i]) continue;
            
            while(arr[i] && visited.find(arr[i]) != end(visited)) arr[i]--, ans++;
            visited.insert(arr[i]);
        }
        
        return ans;
    }
};
