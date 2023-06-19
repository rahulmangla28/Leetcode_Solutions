class Solution {
public:
    int maxProfit(vector<int>& arr, int fee) {
        int n = arr.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));

        for(int ind=n-1;ind>=0;ind--) {
            for(int buy=0;buy<=1;buy++) {
                int profit;
                if(buy==0) {
                    profit = max(dp[ind+1][0],-arr[ind] + dp[ind+1][1]);
                }
                if(buy==1) {
                    profit = max(dp[ind+1][1],arr[ind] - fee + dp[ind+1][0]);
                }

                dp[ind][buy] = profit;
            }
        }

        return dp[0][0];
    }
};