class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            int n=0;
            for(int j=0;j<nums.size();j++){
                if(j!=i && nums[j]<nums[i]){
                    n++;
                }
            }
            ans[i]=n;
        }
        return ans;
    }
};