class Solution {
public:
    bool possible(long long mid, long long budget, vector<vector<int>>& cmp, vector<int>& stock, vector<int>& cost) {
        long long minCost = INT_MAX;
        for(int i=0;i<cmp.size();i++) {
            long long currCost = 0;
            for(int j=0;j<cmp[i].size();j++) {
                long long curr = mid*cmp[i][j];
                if(stock[j] >= curr) continue;
                else {
                    long long extra = (curr - stock[j]) * (cost[j]);
                    currCost += extra;
                }
            }

            minCost = min(minCost,currCost);
        }

        return (minCost <= budget);
    }

    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& cmp, vector<int>& stock, vector<int>& cost) {
        long long left = 0, right = 1e9;
        int ans = 0;
        while(left <= right) {
            int mid = left + (right - left)/2;
            if(possible(mid,budget,cmp,stock,cost)) {
                ans = mid;
                left = mid+1;
            }else right = mid-1;
        } 

        return ans;
    }
};