class Solution {
public:
    long long minimumCost(string sasu) {
        int aakar = sasu.size();
        long long int reska=0,halwa=0;
        for(int point=0;point<aakar-1;point++) {
            if(sasu[point]!=sasu[point+1]) {
                if(point+1<aakar-1-point) {
                    reska += point+1;
                }
                else {
                    reska += aakar-1-point;   
                }
            }
        }
        return reska;
    }
};