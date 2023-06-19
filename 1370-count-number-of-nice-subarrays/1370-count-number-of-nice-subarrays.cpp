class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;

        vector<int> prefix(n);    
        prefix[0] = nums[0]%2 ? 1 : 0;
        for(int i=1;i<n;i++) {
            prefix[i] = prefix[i-1] + (nums[i]%2);
        }

        int res = 0;
        for(int i=0;i<n;i++) {
            if(prefix[i] == k) res++;
            if(mp.find(prefix[i] - k) != mp.end()) {
                res += mp[prefix[i] - k];
            }
            mp[prefix[i]]++;
        }
        return res;
    }
};