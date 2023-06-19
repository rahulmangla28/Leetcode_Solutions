class Solution {
public:
    string removeTrailingZeros(string num) {
        string str = "";
        int n = num.size();
        int ind=n-1;
        for(int i=n-1;i>=0;i--) {
            if(num[i]=='0') continue;
            else {
                ind = i;
                break;
            }
        }
        
        str += num.substr(0,ind+1);
        return str;
    }
};