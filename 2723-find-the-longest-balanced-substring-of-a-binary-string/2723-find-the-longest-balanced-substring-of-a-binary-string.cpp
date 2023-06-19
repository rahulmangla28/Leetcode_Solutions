class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int n = s.size();
        long long int i=0,j;
        int len=0;
        while(i<n) {
            if(s[i]=='0') {
                int sz=0;
                j=i;
                while(s[j]=='0') {
                    j++;
                    sz++;
                }
                int curLen = sz;
                while(s[j]=='1' && sz>0) {
                    j++;
                    sz--;
                }
                if(sz==0) {
                    len = max(curLen,len);
                }
            }
            i++;
        }
        return 2*len;
    }
};