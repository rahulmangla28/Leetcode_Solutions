class Solution {
public:
    void reverseString(vector<char>& s) {
        int a=0,n=s.size()-1,b=n;
        while(a<=(n/2)){
            swap(s[a],s[b]);
            a++;
            b--;
        }
    }
};