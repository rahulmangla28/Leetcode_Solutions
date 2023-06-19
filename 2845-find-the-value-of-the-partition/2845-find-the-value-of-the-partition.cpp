class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int maxi = INT_MAX,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++) {
            maxi = min(maxi,abs(nums[i]-nums[i-1]));
        }
        return maxi;
    }
};