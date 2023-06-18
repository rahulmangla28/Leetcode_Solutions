class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int max=nums[0],ind=0;
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
                ind=i;
            }
        }
        for(int i=0;i<n;i++){
            if(max != nums[i] && max<2*nums[i]){
                return -1;
            }
        }
        return ind;
    }
};