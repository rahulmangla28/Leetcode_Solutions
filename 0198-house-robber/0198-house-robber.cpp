class Solution {
public:

    int fun(int ind,vector<int> &nums,vector<int> &dp) {
        if(ind < 0) return 0;
        if(dp[ind]!=-1) return dp[ind];

        return dp[ind] = max(fun(ind-2,nums,dp) + nums[ind],fun(ind-1,nums,dp));
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        // vector<int> dp(n,-1);
        // return fun(n-1,nums,dp);

        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = nums[0];
        for(int ind=1;ind<n;ind++) {
            dp[ind+1] = max(dp[ind-1] + nums[ind],dp[ind]);
        }

        return dp[n];
    }
};