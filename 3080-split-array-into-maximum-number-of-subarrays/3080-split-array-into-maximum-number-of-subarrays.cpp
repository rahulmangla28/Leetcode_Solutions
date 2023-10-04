class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        int tmp = INT_MAX;
        for(int i=0;i<n;i++) {
            tmp &= nums[i];
            if(tmp == 0) {
                res += 1;
                tmp = INT_MAX;
            }
        }
        return max(1, res);
    }
};