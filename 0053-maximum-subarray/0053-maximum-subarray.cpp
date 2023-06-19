class Solution {            // KADANE's ALGO
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ind = 0,max_sum = 0,sum = 0;
        bool flag = false,ff = false;
        for(int i=0;i<n;i++) {
            if(nums[i]>0) flag = true; 
            if(nums[i]==0) ff = true;
        }
        if(flag==false && ff==true) return 0;
        if(flag == true) {
            for(int i=0;i<n;) {
                if(sum<0) {
                    sum -= nums[ind];
                    ind++;
                }
                else {
                    sum += nums[i];
                    i++;
                }
                max_sum = max(max_sum,sum);
            }
           // cout<<max_sum<<" ";
            return max_sum;
        }
        else {
            int max_element = INT_MAX;
            for(int i=0;i<n;i++) {
                max_element = min(max_element,abs(nums[i]));
            }
            max_element *= (-1);
            return max_element;
        }
        return 0;
    }
};