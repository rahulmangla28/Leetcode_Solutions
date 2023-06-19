class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int a=*max_element(nums.begin(),nums.end());
        int low=1,high=a;
        int mid=low+(high-low)/2;
        while(low<=high){
            int sum=0;
            int mid=low+(high-low)/2;
            for(int i=0;i<n;i++){
                int a=nums[i]/mid;
                if((nums[i]%mid)==0) sum=sum+a;
                else sum=sum+a+1;
            }
            if(sum>threshold) low=mid+1;
            if(sum<=threshold) high=mid-1;
        }
        return low;
    }
};