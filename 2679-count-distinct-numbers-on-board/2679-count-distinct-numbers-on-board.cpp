class Solution {
public:
    int distinctIntegers(int n) {
        // if value of n is smaller than 2 then 1 will be the answer
        if(n<=2) return 1;
        // otherwise answer will be n-1
        else return n-1;
    }
};