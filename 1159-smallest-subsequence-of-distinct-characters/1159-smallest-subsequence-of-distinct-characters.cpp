class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> last(26);
        vector<int> seen(26);

        int n = s.size();
        for(int i=0;i<n;i++) {
            last[s[i]-'a'] = i;
        }

        string res = "";
        for(int i=0;i<n;i++) {
            if(seen[s[i]-'a']++) continue;

            while(!res.empty() && res.back() > s[i] && i < last[res.back()-'a']) {
                seen[res.back() - 'a'] = 0;
                res.pop_back();
            }

            res += s[i];
        }

        return res;
    }
};