class Solution {
public:
    int arrangeCoins(int n){
        long long int k;
        for(k=1;k<=pow(2,16);){
        if((n-(k*k-k)/2)==k){
        return k;
            }
        if((n-(k*k-k)/2)<k){
            return k-1;
        }    
        if ((n-(k*k-k)/2)>k)
            k++;
            }
        return 0;
    }
};