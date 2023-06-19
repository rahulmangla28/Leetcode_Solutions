class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {

        int real1,img1,ind;
        for(int i=0;i<num1.size();i++) {
            if(num1[i]=='+') {
                real1 = stoi(num1.substr(0,i));
                ind  = i;
            }
            else if(num1[i]=='i') {
                img1 = stoi(num1.substr(ind+1,i-ind-1));
            }
        }

        int real2,img2;
        for(int i=0;i<num2.size();i++) {
            if(num2[i]=='+') {
                real2 = stoi(num2.substr(0,i));
                ind  = i;
            }
            else if(num2[i]=='i') {
                img2 = stoi(num2.substr(ind+1,i-ind-1));
            }
        }

        int real = real1*real2 - img1*img2;
        int img =  real1*img2 + real2*img1;

        return to_string(real) + "+" + to_string(img) + "i";

    }
};