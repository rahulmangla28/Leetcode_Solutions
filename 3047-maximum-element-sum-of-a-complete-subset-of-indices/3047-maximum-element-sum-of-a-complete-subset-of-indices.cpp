class Solution {
public:
    long long maximumSum(vector<int>& nums) {
        long long maxSum = 0;
        int n = nums.size();
        for (int i = 1; i <= n; i++) {
            long long total = 0;
            for (int j = 1; j <= n; j++) {
                long long nextEle = i * j * j;
                if (nextEle > n) {
                    break;
                }
                total += nums[nextEle - 1];
            }
            maxSum = max(maxSum, total);
        }
        return maxSum;
    }
};