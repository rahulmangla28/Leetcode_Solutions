class Solution {
public:
    // int integerBreak(int n) {
    //     vector<int> dp(n+1,0);
    //     if(n<=2) return 1;
    //     dp[1] = 0;
    //     dp[2] = 1;

    //     for(int i=3;i<=n;i++) {
    //         for(int j = 1; j < i ;j++) {
    //             int res = max(j*(i-j), j*dp[i-j]);
    //             dp[i] = max(dp[i], res);
    //         }
    //     }

    //     return dp[n];
    // }

                               // Alternate

    int integerBreak(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
        int product = 1;
        while(n>4){
            product*=3;
            n-=3;
        }
        product*=n;
        
        return product;
    }    
};