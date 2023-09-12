class Solution {
public:
    int minDeletions(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++) {
            mp[s[i]] ++ ;
        }

        unordered_set<int> seen;
        int res = 0;
        for(auto it : mp) {
            while(seen.find(it.second) != seen.end()) {
                it.second -= 1;
                res += 1;
            }
            if(it.second > 0) seen.insert(it.second);
        }

        return res;
    }
};