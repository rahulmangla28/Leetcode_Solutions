class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> prefix,suffix;
        for(auto it : nums) suffix[it]++;
        for(auto it : nums) {
            prefix[it]++;
            suffix[it]--;
            if(suffix[it]==0) suffix.erase(it);
            ans.push_back(prefix.size()-suffix.size());
        } 
        return ans;
    }
};