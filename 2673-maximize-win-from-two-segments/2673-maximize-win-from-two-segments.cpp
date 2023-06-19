class Solution {
public:
    int maximizeWin(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n,0);
        int start=0,ans=0;
        for(int i=0;i<n;i++) {
            while(arr[i]-arr[start]>k) ++start;
            dp[i] = max((i>0 ? dp[i-1] : 0),i-start+1);
            ans = max(ans,((start>0 ? dp[start-1] : 0 ) +i-start+1));
        }
        
        return ans;
    }
};