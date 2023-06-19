class Solution {
public:

    int fun(int ind,string s,vector<int> &dp) {
        if(ind==s.size()) return 1;
        if(dp[ind]!=-1) return dp[ind];

        int ans = 0;
        if (s[ind] != '0') // Single digit
            ans += fun(ind+1,s,dp);
        if (ind+1 < s.size() && (s[ind] == '1' || s[ind] == '2' && s[ind+1] <= '6')) // Two digits
            ans += fun(ind+2,s,dp);

        return ans;
    }

    int numDecodings(string s) {
        int n = s.size();
        // vector<int>  dp(n,-1);
        // return fun(0,s,dp);

        vector<int> dp(n+1, 0);
        dp[n] = 1;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] != '0') // Single digit
                dp[i] += dp[i+1];
            if (i+1 < s.size() && (s[i] == '1' || s[i] == '2' && s[i+1] <= '6')) // Two digits
                dp[i] += dp[i+2];
        }
        return dp[0];
    }
};