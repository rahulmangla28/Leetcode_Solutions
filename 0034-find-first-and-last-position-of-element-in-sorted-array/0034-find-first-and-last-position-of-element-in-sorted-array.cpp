class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int a=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int b=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        ans.push_back(a);
        ans.push_back(b-1);
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target) return ans;
        }
        return {-1,-1};
    }
};