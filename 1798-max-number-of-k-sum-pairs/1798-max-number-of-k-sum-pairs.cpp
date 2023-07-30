class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int cnt = 0;
        for(int i=0;i<n;i++) {
            if(mp.find(k-nums[i]) != mp.end()) {
                cnt += 1;
                mp[k-nums[i]] -= 1;
                if(mp[k-nums[i]] == 0) mp.erase(k-nums[i]);
            }else {
                mp[nums[i]] += 1;
            }
        }    

        return cnt;
    }
};