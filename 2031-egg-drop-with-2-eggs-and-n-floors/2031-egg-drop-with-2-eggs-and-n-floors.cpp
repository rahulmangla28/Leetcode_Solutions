class Solution {
public:
    int twoEggDrop(int n) {
        int cnt = 0,i=0;
        while(n>=1) {
            n = n - i;
            cnt++;
            i++;
        }
        return cnt-1;
    }
};