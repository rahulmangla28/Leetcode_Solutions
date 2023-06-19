class Solution {
public:

    long long int getAns(vector<int> &arr,int ind,int buy,int n,vector<vector<long long>> dp) {
        if(ind==n) return 0; //base case
    
        if(dp[ind][buy]!=-1)
            return dp[ind][buy];
            
        long long int profit;
        
        if(buy==0){// We can buy the stock
            profit = max( getAns(arr,ind+1,0,n,dp), -arr[ind] + getAns(arr,ind+1,1,n,dp));
        }
        
        if(buy==1){// We can sell the stock
            profit = max( getAns(arr,ind+1,1,n,dp), arr[ind] + getAns(arr,ind+1,0,n,dp));
        }
        
        return dp[ind][buy] = profit;
    }

    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        vector<vector<long long>> dp(n+1,vector<long long>(2,0));
        if(n==0) return 0;

        dp[n][0] = dp[n][1] = 0;
        long long profit = 0;

        for(int ind=n-1;ind>=0;ind--) {
            for(int buy=0;buy<=1;buy++) {
                if(buy==0){// We can buy the stock
                    profit = max( dp[ind+1][0], -arr[ind] + dp[ind+1][1]);
                }
                
                if(buy==1){// We can sell the stock
                    profit = max( dp[ind+1][1], arr[ind] + dp[ind+1][0]);
                }

                dp[ind][buy] = profit;
            }
        }

        return dp[0][0];
    }
};