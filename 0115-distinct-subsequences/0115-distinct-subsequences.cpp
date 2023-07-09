class Solution {
public:
    int numDistinct(string s1, string s2) {
        long long n = s1.size(),m = s2.size();
        vector<vector<long long>> dp(n+1,vector<long long>(m+1,0));
    
        for(long long i=0;i<n+1;i++){
            dp[i][0]=1;
        }
        for(long long i=1;i<m+1;i++){
            dp[0][i]=0;
        }
        
        for(long long i=1;i<n+1;i++){
            for(long long j=1;j<m+1;j++){
                
                if(s1[i-1]==s2[j-1])
                    dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 1000000007;
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        
        
        return dp[n][m];    
    }
};