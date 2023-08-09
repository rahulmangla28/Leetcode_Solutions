class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        int n = nums.size();
        bool flag = false;
        for(int i=0;i<n-1;i++) {
            if(nums[i] + nums[i+1] >= m) flag = true;
        }
        if(n<=2) return true;
        return flag;
    }
};