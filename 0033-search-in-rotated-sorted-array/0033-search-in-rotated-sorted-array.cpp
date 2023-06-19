class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int mid;
        bool flag =false;
        for(int i=0;i<n;i++){
            if(nums[i]==target) flag=true;
        }
        if(flag==false) return -1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<=nums[mid]) high=mid-1;
                else low=mid+1;
            }
            else {
                if(target>=nums[mid] && target<=nums[high]) low=mid+1;
                else high=mid-1;
            }
        }
        return mid;
    }
};