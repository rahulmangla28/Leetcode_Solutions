class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> arr(10);
        for(int i=0;i<n;i++) {
            int digit = -1;
            int num = nums[i];
            while(num) {
                digit = max(digit,num%10);
                num /= 10;
            }
            arr[digit].push_back(nums[i]);
        }
        
        int res = -1;
        for(int i=0;i<10;i++) {
            vector<int> tmp = arr[i];
            sort(tmp.begin(),tmp.end(),greater<int>());
            if(tmp.size() >= 2) res = max(res,tmp[0] + tmp[1]);
        }
        
        return res;
    }
};