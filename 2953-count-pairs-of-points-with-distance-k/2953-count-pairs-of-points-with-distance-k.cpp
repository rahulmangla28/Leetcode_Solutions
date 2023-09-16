class Solution {
public:
    int countPairs(vector<vector<int>>& nums, int k) {
        int n = nums.size();    
        map<pair<int,int>,int> mp;
        int res = 0;
        for(int i=0;i<n;i++) {
            int x = nums[i][0];
            int y = nums[i][1];

            for(int j=0;j<=k;j++) {
                int a = j;
                int b = k - j;

                int x2 = x ^ a;
                int y2 = y ^ b;

                if(mp.find({x2,y2}) != mp.end()) {
                    res += mp[{x2,y2}];
                }
            }

            mp[{x,y}] += 1;
        }

        return res;
    }
};