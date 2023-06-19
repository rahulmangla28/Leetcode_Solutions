#include <bits/stdc++.h>
class Solution {
public:

           // Helper func not working properly

     int helper(vector<int>& arr, int s,int k,int* memo){
        
        if(s >= arr.size())
            return 0;
        if(memo[s] != -1)    /// Memoization
            return memo[s];
        
        int sum = INT_MIN;
        int max_ele = INT_MIN;
        int n = arr.size();
        
        for(int i=s ; i < min( n , s+k );i++){
      
                max_ele = max(max_ele,arr[i]);
                sum = max(sum, helper(arr,i+1,k,memo) + max_ele*(i+1-s));
            
        }
        memo[s] = sum;   /// Saving the answer for future use.
        return sum;
        
    }

    int maxSumAfterPartitioning(vector<int>& A, int K) {
        int N = A.size();
        vector<int> dp(N + 1);
        for (int i = 1; i <= N; ++i) {
            int curMax = 0, best = 0;
            for (int k = 1; k <= K && i - k >= 0; ++k) {
                curMax = max(curMax, A[i - k]);
                best = max(best, dp[i - k] + curMax * k);
            }
            dp[i] = best; 
        }
        return dp[N];
    }
};