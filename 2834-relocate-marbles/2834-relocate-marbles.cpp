class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]] = 1;
        }    

        for(int i=0;i<moveFrom.size();i++) {
            int start = moveFrom[i];
            int end = moveTo[i];
            mp[start] = 0;
            mp[end] = 1;
        }

        vector<int> res;
        for(auto it : mp) {
            if(it.second > 0) {
                //cout<<it.first<<" "<<it.second<<endl;
                res.push_back(it.first);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};