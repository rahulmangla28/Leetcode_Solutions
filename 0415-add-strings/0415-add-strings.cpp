class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        
        string str="";
        int carry = 0;
        int ind1 = n-1,ind2 = m-1;
        while(ind1>=0 || ind2>=0) {
            int x = ind1 >= 0 ? num1[ind1] - '0' : 0;
            int y = ind2 >= 0 ? num2[ind2] - '0' : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            str += to_string(sum%10);
            if(ind1 >= 0) ind1--;
            if(ind2 >= 0) ind2--;
        }
        if(carry > 0) {
            str += to_string(carry);
        }
        
        reverse(str.begin(),str.end());
        return str;
    }
};