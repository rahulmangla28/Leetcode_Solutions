class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string res = "";
        string curr = "";
        for(int i=n-1;i>=0;i--) {
            if(s[i]==' ') {
                if(curr.size()==0) continue;
                if(res.size()!=0) res += " ";
                reverse(curr.begin(),curr.end());
                res += curr;
                curr = "";
            }else {
                curr += s[i];
            }
        }
        if(curr.size()==0) return res;
        if(res.size()!=0) res += " ";
        reverse(curr.begin(),curr.end());
        res += curr;

        return res;
    }
};