class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++) {
            mp[arr[i]].push_back(i);
        }

        vector<vector<int>> ans;
        for(auto it : mp) {
            int size = it.first;
            int cnt = it.second.size()/size;
            
            int i = 0;
                while(cnt--) {
                    vector<int> a;
                    int b = size;
                    while(b--) {
                        a.push_back(it.second[i++]);
                    }
                ans.push_back(a);
                }
            
        }

        return ans;
    }
};