class Solution {
public:
    int hammingDistance(int x, int y) {
        int n=0;
        while(x!=0 || y!=0){
            if(((x%2)^(y%2))==1) n++;
            x=x/2;
            y=y/2;
        }
        return n;
    }
};