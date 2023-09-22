class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        if(n==0) return true;
        if(t.size()==0) return false;
        int i=0,j=0,k=0;
        while(i<=(n-1) && j<=(t.size()-1)){
            if(s[i]==t[j]){
                i++;
                j++;
                k++;
            }
            else j++;
        }
        if(k==n) return true;
        else return false;
    }
};