class Solution {
public:
    int countWays(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++) {
            if(nums[i+1] > i+1 && nums[i] < i+1) res += 1;
        }
        if(n > *max_element(nums.begin(),nums.end())) res += 1;
        if(nums[0] > 0) res += 1;
        return res;
        
    }
};