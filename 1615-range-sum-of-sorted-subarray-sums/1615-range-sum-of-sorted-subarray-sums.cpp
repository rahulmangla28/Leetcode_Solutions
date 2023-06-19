class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
     vector<int> ans;
        int sum=0;
        int k=nums.size();
        for(int i=0;i<k;i++){
            for(int j=i;j<k;j++){
                sum=sum+nums[j];
                ans.push_back(sum);
            }
            sum=0;
        }
        sort(ans.begin(),ans.end());
        long long int a=0;
        for(int i=left-1;i<right;i++){
            a=a+ans[i];
            a%=1000000007;
        }
        return a;
    }
};