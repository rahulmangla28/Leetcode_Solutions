class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        int i=0,j=0;
        int tar =0 ;
        vector<int>vis(2001,-1);
        for(i=0;i<n;i++) {
            if(vis[nums[i]] == -1) {
                tar += 1;
                vis[nums[i]] = 1;
            }
        }
        unordered_map<int,int> mp;
        i = 0;
        while(j < n) {
            mp[nums[j]] ++;
            while (i <= j && mp.size() == tar) {
                mp[nums[i]] -= 1;
                if(mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
                res += n-j;
            }
            j++  ;    
        }
       // if(mp.size() == tar) res += n-j;
        return res;
    }
};