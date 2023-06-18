class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        vector<int> v(n+1);
        v[0]=0;
        int i=0,j=n;
        for(int k=0;k<n;k++){
            if(s[k]=='I'){
                 v[k]=i;
                 i++;
            }
            else{
                v[k]=j;
                j--;
            }
        }
        v[n]=i;
        return v;
    }
};