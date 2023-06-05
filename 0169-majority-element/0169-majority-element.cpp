class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
       int res = nums[0];
       int cnt = 0;
       for(int i=0;i<n;i++) {
           if(cnt==0) {
               res = nums[i];
           }

           cnt += (nums[i]==res) ? 1 : -1;
       }

       return res;
    }
};