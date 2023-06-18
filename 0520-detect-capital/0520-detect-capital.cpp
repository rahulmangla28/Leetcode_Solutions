class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag = false;
        if(word[0]>=65 && word[0]<=91) flag = true;
        int small = 0,caps=0,n=word.size();
        for(int i=0;i<n;i++) {
            if(word[i]>=97 && word[i]<=122) small++;
            else caps++;
        }

        if(small==n) return true;
        else if(caps==n) return true;
        else if(flag && small==n-1) return true;
        else return false;
    }
};