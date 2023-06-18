class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0,n=nums.size();
        for(int i=0;i<n-1;i++){
            int a=nums[i];
            int b=nums[i+1];
            while((b-a)<1){
                b++;
                ans++;
            }
            nums[i+1]=b;
        }
        return ans;
    }
};