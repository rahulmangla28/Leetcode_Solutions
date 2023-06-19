class Solution {
public:

    int dp[6001][2];

    int fun(int pos,int a,int b,int x,vector<int> arr,int back) {
        if(pos==x) return 0;
        if( pos < 0 || find(arr.begin(),arr.end(),pos)!= arr.end() || pos>6000 )
            return 1e9;
        if(dp[pos][back]!=-1) return dp[pos][back];

        //int forward = 0 , backward = 0 ;
        dp[pos][back] = 1 + fun(pos+a,a,b,x,arr,0);
        if(!back)
            dp[pos][back] = min(dp[pos][back], 1 + fun(pos-b,a,b,x,arr,1) ) ;

        return dp[pos][back];
    }

    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        memset(dp,-1,sizeof(dp));

        int ans = fun(0,a,b,x,forbidden,0);
        if(ans > 1e9) ans = -1;
        return ans;

    }
};