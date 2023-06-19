class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& arr) {
        int n = arr.size();
        if(n<3) return 0;
        vector<int> dp(n,0);
        if (arr[2]-arr[1] == arr[1]-arr[0]) dp[2] = 1;
        int result = dp[2];

        for(int ind=3;ind<n;++ind) {
            if(arr[ind]-arr[ind-1] == arr[ind-1]-arr[ind-2]) 
                dp[ind] = dp[ind-1] + 1; 
            result += dp[ind];
        }

        return result;
    }
};