class Solution {
public:
    bool isPowerOfTwo(int n) {
        //out<<!(n & (n-1));
        return n > 0 && !(n & (n-1));
    }
};