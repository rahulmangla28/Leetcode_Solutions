class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,set<int>> mp;
        for(auto it = 0; it<logs.size();it++) {
            mp[logs[it][0]].insert(logs[it][1]);
        }

        vector<int> arr(k,0);
        for(auto it : mp) {
            if(it.second.size()!=0)arr[it.second.size()-1] ++;
        }

        return arr;

    }
};