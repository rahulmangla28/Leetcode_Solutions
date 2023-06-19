class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int cur_maxTime=0,totalTime=0;

        for(int i=0;i<n;i++) {
            if(i>0 && colors[i]!=colors[i-1]) {
                cur_maxTime = 0;
            }
            
            totalTime += min(cur_maxTime,neededTime[i]);
            cur_maxTime = max(cur_maxTime,neededTime[i]);

        }
        return totalTime;
    }
};