class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=3){
            if(i==nums.size()-1) return nums[nums.size()-1];
            if((nums[i]^nums[i+1])!=0) return nums[i];
        }
        return 0;
    }
};