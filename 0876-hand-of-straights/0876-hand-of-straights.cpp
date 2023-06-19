class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int sz) {
        int n = nums.size();
        if( n % sz != 0) return false;

        map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }

        while(mp.size() != 0) {
            int curr = mp.begin()->first;
            for(int ele=0;ele<sz;ele++) {
                if(mp[curr+ele]==0) return false;
                else if(--mp[curr+ele] < 1) mp.erase(curr+ele);
            }
        }

        return true;
    }
};