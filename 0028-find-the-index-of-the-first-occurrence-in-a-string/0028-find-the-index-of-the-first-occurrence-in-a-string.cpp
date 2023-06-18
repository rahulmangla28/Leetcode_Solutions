class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int ans = -1;
        char ch = needle[0];
        for(int i=0;i<n;i++) {
            if(haystack[i]==ch) {
                string s = haystack.substr(i,needle.size());
                if(s == needle) {
                    ans = i;
                    break;
                }
            }
        }
        return ans;
    }
};