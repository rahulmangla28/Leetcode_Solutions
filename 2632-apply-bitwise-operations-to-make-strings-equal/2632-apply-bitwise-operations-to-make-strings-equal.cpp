class Solution {
public:
    bool makeStringsEqual(string s, string t) {
        if (s == t)
            return true;

        int n = s.size();
        int a = 0 , b = 0 ;
        for(int i=0;i<n;i++) {
            if(s[i]=='0') a++;
            if(t[i]=='0') b++;
        }
        if ( a==n || b==n)
            return false;

        return true;
        
    }
};