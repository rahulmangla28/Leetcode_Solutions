class Solution {
public:

    bool palCheck(string s) {
        int n = s.size();
        for(int i=0;i<n/2;i++) {
            if(s[i] != s[n-1-i]) return false;
        }

        return true;
    }

    bool base(int n,int a) {
        string s = "";
        while(n!=0) {
            s += (n%a);
            n /= a;
        }

        return palCheck(s);
    } 

    bool isStrictlyPalindromic(int n) {
        for(int i = 2;i < (n-1); i++) {
            if(base(n,i) == false) {
                return false;
            }
        }

        return true;
    }
};