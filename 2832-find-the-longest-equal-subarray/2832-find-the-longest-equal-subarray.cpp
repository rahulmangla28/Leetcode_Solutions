class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int ind = 0;

        int res = 0;
        unordered_map<int,int> count;
        for(int i=0;i<n;i++) {
            res = max(res,++count[nums[i]]);
            if(i - ind + 1 - res > k) {
                count[nums[ind++]] -= 1;
            }
        }    

        return res;
    }
};