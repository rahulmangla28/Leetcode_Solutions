class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=k-1;
        int a=nums[j]-nums[i];
        while(j<=(n-1)){
            if((nums[j]-nums[i])<=a) a=nums[j]-nums[i];
            i++;
            j++;
        }
        return a;
    }
};