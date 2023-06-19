class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int a=pow(2,maximumBit)-1;
        int b=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            b=b^nums[i];
            ans.push_back(b^a);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};