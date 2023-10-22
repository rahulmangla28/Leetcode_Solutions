class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();

        int res = 1e9;
        for(int i=1;i<n-1;i++) {
           int mid = nums[i];
           int left = nums[i];
           int right = nums[i];

           for(int j=0;j<i;j++) {
               if(nums[j] < left) left = nums[j];
           }
           if(left == mid) left = 1e9;
           for(int k=i+1;k<n;k++) {
               if(nums[k] < right) right = nums[k];
           }
           if(right == mid) right = 1e9;
            res = min(res,left + right + mid);
        }

        if(res == 1e9) return -1;
        return res;
    }
};