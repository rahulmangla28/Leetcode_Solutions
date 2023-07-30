class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> smaller(n);
        vector<int> larger(n);    

        smaller[0] = nums[0];
        larger[n-1] = nums[n-1];

        int mini = nums[0],maxi = nums[n-1];
        for(int i=1;i<n;i++) {
            mini = min(mini,nums[i-1]);
            smaller[i] = mini;
        }

        for(int i = n-2;i>=0;i--) {
            maxi = max(maxi,nums[i+1]);
            larger[i] = maxi;
        }

        for(int i = 1; i< n-1;i++) {
            if(nums[i] >  smaller[i] && nums[i] < larger[i]) return true;
        }

        return false;
    }
};