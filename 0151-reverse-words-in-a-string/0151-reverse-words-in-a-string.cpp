class Solution {
public:
    string reverseWords(string s) {
                                  // O(n) - SC
        // int n = s.size();
        // string res = "";
        // string curr = "";
        // for(int i=n-1;i>=0;i--) {
        //     if(s[i]==' ') {
        //         if(curr.size()==0) continue;
        //         if(res.size()!=0) res += " ";
        //         reverse(curr.begin(),curr.end());
        //         res += curr;
        //         curr = "";
        //     }else {
        //         curr += s[i];
        //     }
        // }
        // if(curr.size()==0) return res;
        // if(res.size()!=0) res += " ";
        // reverse(curr.begin(),curr.end());
        // res += curr;

        // return res;

                            // Space Optimisation O(1)

        reverse(s.begin(),s.end());
        int i=0,l=0,r=0,n=s.size();
        while (i < n) {
            while (i < n && s[i] != ' ')
                s[r++] = s[i++];

            if (l < r) { // if we can find a non-empty word then
                reverse(s.begin() + l, s.begin() + r); // reverse current word
                if (r == n) break;
                s[r++] = ' '; // set empty space
                l = r;
            }
            ++i; // now i == n or s[i] == ' ', so we skip that character!
        }
        if (r > 0 && s[r-1] == ' ') --r; // skip last empty character if have
        s.resize(r);
        return s;
    }
};