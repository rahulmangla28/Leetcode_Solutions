class Solution {
public:
    int numberOfSteps(int num) {
        int n=0;
        for(n=0;num!=0;n++){
            if((num%2)==0) num=num/2;
            else num=num-1;
        }
        return n;
    }
};