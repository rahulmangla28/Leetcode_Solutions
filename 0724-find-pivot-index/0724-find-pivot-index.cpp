class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(),sum=0,a=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        for(int j=0;j<n;j++){
            a=a+nums[j];
            if(sum==((2*a)-nums[j])){
                return j;
            }
        }
        return -1;

    }
};