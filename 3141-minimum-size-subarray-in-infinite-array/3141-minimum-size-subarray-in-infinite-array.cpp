class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        int ans = 0;
        int n = nums.size();
        long long sum = 0;
        vector<int> ex(2*n);
        for (int i = 0; i < 2 * n; i++) {
            ex[i] = nums[i % n];
        }
        for (int num : nums) {
            sum += num;
        }
        if (target > sum) {
            ans = (target / sum) * n;   
            target = target % sum;
        }
        int left = 0, right = 0, x = 0, res = INT_MAX;
        while (right < 2 * n) {
            while (right < 2 * n && x < target) {
                x += ex[right];
                right++;
            }   
            while (left < right && x > target) {
                x -= ex[left];
                left++;
            }
            
            if (x == target) {
                res = min(res, right - left);
                left++;
                right = left;
                x = 0;
            }
        }
        if (res == INT_MAX) {
            return -1;
        }
        ans += res;
        return ans ;
    }
};