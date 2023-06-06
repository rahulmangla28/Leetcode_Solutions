class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=1,j=1,k=0;
        while(i<n && j<n){
            if(nums[j]==nums[j-1]) j++;
            else {
                nums[i]=nums[j];
                i++;
                j++;
                k++;
            }
        }
        return i;
    }
};