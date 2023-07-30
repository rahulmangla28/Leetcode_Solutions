class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();    
        string res = "";
        int cnt = 1;
        char ch ;
        if(n <= 1) return n;
        for(int i=1;i<n;i++) {
            if(chars[i-1] == chars[i]) cnt += 1;
            else {
                ch = chars[i-1];
                res = (cnt > 1) ? res + ch + to_string(cnt) : res + ch;
                cnt = 1;
            }
        }
        if(ch != chars[n-1]) {
            ch = chars[n-1];
            res = (cnt > 1) ? res + ch + to_string(cnt) : res + ch;
        }

        for(int i=0;i<res.size();i++) {
          //  cout<<res[i]<<" ";
            chars[i] = res[i];
        }
        return res.size();
    }
};