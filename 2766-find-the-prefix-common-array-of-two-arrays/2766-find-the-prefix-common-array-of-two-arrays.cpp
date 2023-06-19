class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int n = a.size();
        vector<int> res(n);

        map<int,int> mp;
        res[0] = a[0]==b[0] ? 1 : 0;
        mp[a[0]]++;mp[b[0]]--;
        for(int i=1;i<n;i++) {
            int cnt = 0;
            mp[a[i]]++;
            mp[b[i]]--;
            if(mp[a[i]]==0) cnt++;
            if((a[i] != b[i]) && (mp[b[i]]==0)) cnt++;
            res[i] = res[i-1] + cnt; 
        }

        return res;
    }
};