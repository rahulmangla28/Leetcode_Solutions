class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int n=nums.size(),sum=0,ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        vector<int> v;
        for(int i=0;i<n;i++){
            ans+=nums[i];
            sum-=nums[i];
            v.push_back(nums[i]);
            if(ans>sum) break;
        }
        return v;
    }
};