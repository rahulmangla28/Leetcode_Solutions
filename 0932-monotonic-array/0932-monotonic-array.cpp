class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> tmp(nums.begin(),nums.end());
        sort(tmp.begin(),tmp.end());
        if(nums == tmp) return true;
        reverse(tmp.begin(),tmp.end());
        if(nums == tmp) return true;

        return false;
    }
};