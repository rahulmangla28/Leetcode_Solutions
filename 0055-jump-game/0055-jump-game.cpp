class Solution {
public:

    bool fun(int ind,vector<int> &nums,vector<int> &dp) {
        if(ind==nums.size()-1) return true;
        if(dp[ind]!=-1) return dp[ind];

        int reachable = nums[ind]+ind;
        for(int jump=ind+1;jump<=reachable;jump++) {
            if(fun(jump,nums,dp)) 
                return (dp[ind] = true); 
        }

        return (dp[ind] = false);
    }

    bool canJump(vector<int>& nums) {
        int n = nums.size();
                           // recursion + memoization
        //vector<int> dp(n,-1);
        // return fun(0,nums,dp);

                                 // pure dp
        vector<int> dp(n,0);
        dp[n-1] = 1;

        for(int ind = n-2;ind>=0;ind--) {
            if(nums[ind]==0) {
                dp[ind] = false;
                continue;
            }

            bool flag = false;
            int reach = ind + nums[ind];
            for(int jump = ind+1 ; jump<=reach ; jump++) {
                if(jump<n && dp[jump]) {
                    dp[ind] = true;
                    flag = true;
                    break;
                }
            }

            if(flag) continue;

            dp[ind] = false;
        }

        return dp[0];
    }

};