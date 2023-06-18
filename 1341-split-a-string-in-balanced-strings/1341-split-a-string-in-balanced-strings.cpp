class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0,ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='R') cnt++;
            else cnt--;
            if(cnt==0) ans++;
        }
        return ans;
    }
};