class Solution {
public:

    int dp[100][100][21];
    int maxi = 1e7 + 1;

    int helper(int ind,int count,int prev,vector<int> &houses,vector<vector<int>>& cost,int target) {

        if(ind==houses.size()) return count==target ? 0 : maxi;

        if(dp[ind][count][prev]!=-1) return dp[ind][count][prev];

        int miniCost = maxi;

        //If already painted
        if(houses[ind]) {

            // if prev house is of different color, increase the count by 1
            if(houses[ind]!=prev) miniCost = helper(ind+1,count+1,houses[ind],houses,cost,target);
            else miniCost = helper(ind+1,count,houses[ind],houses,cost,target);

        }
        else {
            //we have to try all the colors
            for(int j=0;j<cost[0].size();j++) {
                int temp;

                // if prev house is of different color, increase the count by 1
                if((j+1)!=prev) temp = cost[ind][j] + helper(ind+1,count+1,j+1,houses,cost,target);
                else temp = cost[ind][j] + helper(ind+1,count,j+1,houses,cost,target);

                miniCost = min(miniCost,temp);
            }

        }

        return dp[ind][count][prev] = miniCost;

    }

    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        memset(dp,-1,sizeof(dp));
        int ans = helper(0,0,0,houses,cost,target);

        if(ans == maxi) return -1;
        else return ans;
    }
};