class Solution {
public:

    int fun(int i,int j,int m,int n,vector<vector<int>> dp) {
        if(i==m && j==n) return 1;
        if(i>m || j>n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];


        int right = fun(i,j+1,m,n,dp);
        int down = fun(i+1,j,m,n,dp);

        return dp[i][j] = (right + down);

    }

    int uniquePaths(int m, int n) {
        //vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        // return fun(1,1,m,n,dp);

        // pure dp soln
        vector<vector<int>> dp(m,vector<int>(n,1));
        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }

        return dp[m-1][n-1];
    }
};