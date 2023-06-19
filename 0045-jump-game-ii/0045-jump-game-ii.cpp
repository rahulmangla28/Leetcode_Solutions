class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps=0,curEnd=0,curFartherst=0;
        for(int i=0;i<n-1;i++) {
            curFartherst = max(curFartherst,i+nums[i]);
            if(i==curEnd) {
                jumps++;
                curEnd = curFartherst;
            }
        }
        return jumps;
    }
};