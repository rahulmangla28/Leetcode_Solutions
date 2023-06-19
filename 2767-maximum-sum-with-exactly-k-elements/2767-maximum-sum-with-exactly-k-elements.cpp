class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(),nums.end());
        maxi = k*maxi;
        k = (k*(k-1)/2);
        maxi += k;
        return maxi;
    }
};