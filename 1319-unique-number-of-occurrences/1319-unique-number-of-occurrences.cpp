class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> nums(2001,-1);    
        for(int i=0;i<arr.size();i++) {
            nums[arr[i]+1000] += 1;
        }

        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++) {
            if(nums[i] != -1 && nums[i] == nums[i-1]) return false;
        }
        return true;
    }
};