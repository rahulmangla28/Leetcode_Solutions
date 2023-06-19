class Solution {
public:

      //     Learn Bit Soln..............

    void fun(int i,vector<int> &arr,vector<vector<int>> &ans,int n,vector<int> &nums){
        ans.push_back(arr);
        for(int j = i;j<nums.size();j++) {
            arr.push_back(nums[j]);
            fun(j+1,arr,ans,n,nums);
            arr.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        vector<vector<int>> ans;    
        fun(0,arr,ans,n,nums);
        return ans;
    }
};