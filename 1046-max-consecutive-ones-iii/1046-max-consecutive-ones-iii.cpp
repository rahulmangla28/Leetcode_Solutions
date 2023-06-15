class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int oneCount=0,zeroCount=0;
        int n = nums.size();

        int left = 0 , right = 0 , res = 0;

        while(right < n) {
            if(nums[right]==1) oneCount++;
            else if(nums[right]==0) zeroCount++;

            if(zeroCount > k) {
                res = max(res,zeroCount + oneCount - 1);
                while(zeroCount > k) {
                    if(nums[left]==0) zeroCount--;
                    else oneCount--;
                    left++;
                }
            }

            right++;
        }
        res = max(res,zeroCount + oneCount);
        if(zeroCount > k) res -= (k - zeroCount);
        return res;
    }
};