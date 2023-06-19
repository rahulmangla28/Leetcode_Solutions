class Solution {
public:
    int countPairs(vector<int>& del) {
        int n = del.size();
        if(n==1) return 0;
        long long cnt = 0;
        int mod = 1000000007;
        unordered_map<int,int> mp;

        sort(del.begin(),del.end());
        mp[del[0]]++;

        for(int i=1;i<n;i++) {
            int x = del[i];
            for(int j=0;j<22;j++) {
                int val = pow(2,j) - x;
                if(mp.find(val)!=mp.end()) {
                    cnt += mp[val]%mod;
                    cnt = cnt%mod;
                }
            }
            mp[del[i]]++;
        }
        return cnt;
    }
};