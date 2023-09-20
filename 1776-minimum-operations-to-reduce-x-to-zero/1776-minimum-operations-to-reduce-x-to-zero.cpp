class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++) sum += nums[i];
        sum -= x;

        if(sum < 0) return -1;
        if(sum == 0) return n;
        
        int start = 0, end = 0,len=-1;
        int currSum = 0;
        for(end = 0 ; end < n ; end ++) {
            if(currSum < sum) {
                currSum += nums[end];
            }
            while(currSum >= sum) {
                if(currSum == sum) {
                    len = max(len,end-start+1);
                }
                currSum -= nums[start];
                start += 1;
            }
        }

        return len == -1 ? -1 : n-len;
    }
};