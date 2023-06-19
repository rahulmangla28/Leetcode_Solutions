class Solution {
public:
    long long coloredCells(int n) {
        vector<long long int> dp(1e5+1);
        dp[0] = 1;
        for(int i=1;i<=1e5;i++) {
            dp[i] = dp[i-1] + 4*(i-1);
        }
        return dp[n];
    }
};