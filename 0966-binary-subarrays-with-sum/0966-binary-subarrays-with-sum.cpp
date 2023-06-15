class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mp;
        int n = nums.size();

        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i=1;i<n;i++) {
            prefix[i] = prefix[i-1] + nums[i];
        }

        int res = 0;
        for(int i=0;i<n;i++) {
            if(prefix[i] == goal) res++;

            if(mp.find(prefix[i] - goal) != mp.end()) {
                res += mp[prefix[i] - goal];
            }

            mp[prefix[i]]++;
        }

        return res;
    }
};