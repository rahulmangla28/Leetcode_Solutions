class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> ans;
        int a=0;
        for(int i=0;i<nums.size()-1;i+=2){
            a=nums[i];
            while(a>0){
                ans.push_back(nums[i+1]);
                a--;
            }
        }
        return ans;
    }
};