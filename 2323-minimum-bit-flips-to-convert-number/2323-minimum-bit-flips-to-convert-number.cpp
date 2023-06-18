class Solution {
public:
    int minBitFlips(int start, int goal) {
        goal = start ^ goal;
        int res = 0;
        while(goal) {
            if(goal%2) res++;
            goal /= 2;
        }    

        return res;
    }
};