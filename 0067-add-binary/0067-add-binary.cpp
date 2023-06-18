class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int sum=0;
        string ans="";
        int n= max(a.size(),b.size());
        for(int i=0;i<n;i++){
            sum=sum+(i<a.size()? a[i]-'0':0)+(i<b.size()?b[i]-'0':0);
            if(sum==0) ans.push_back('0');
            else if(sum==1) {
                ans.push_back('1');
                sum=0;
            }
            else if(sum==2) {
                sum=1;
                ans.push_back('0');
            }
            else if(sum==3){
                sum=1;
                ans.push_back('1');
            }
        }
        if(sum==1) ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};