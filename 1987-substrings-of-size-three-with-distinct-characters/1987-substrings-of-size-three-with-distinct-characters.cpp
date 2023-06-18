class Solution {
public:
    int countGoodSubstrings(string s) {
        int k=0,n=0;
   // for(int i=0;s[i]!='\0';i++)
     //   n++;
        for(int i=0;s[i]!='\0';i++){
            if(s[i+1]!='\0' && s[i+2] != '\0' && s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2])
                k++;
        }
        return k;    
    }
};