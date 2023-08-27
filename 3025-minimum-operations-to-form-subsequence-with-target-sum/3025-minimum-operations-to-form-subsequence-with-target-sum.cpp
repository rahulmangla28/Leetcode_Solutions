class Solution {
public:
    int minOperations(vector<int>& nums, int target) {
        long long int sum = 0;
        for(int i=0;i<nums.size();i++) sum += nums[i];
        if(sum < target ) return -1;
        
        sort(nums.begin(), nums.end());
        int ops = 0;
        while (true) {
            long long int total = 0;
            int last_skipped = -1;
            for (int i = nums.size() - 1; i >= 0; i--) {
                if (total + nums[i] > target) {
                    last_skipped = i;
                    continue;
                }
                total += nums[i];
            }
            if (total == target) {
                return ops;
            } else {
                long long int new_num = nums[last_skipped] / 2;
                nums.erase(nums.begin() + last_skipped);
                nums.insert(nums.begin() + last_skipped, new_num);
                nums.insert(nums.begin() + last_skipped, new_num);
            }
            ops++;
        }
    }
};