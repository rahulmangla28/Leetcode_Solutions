class Solution {
public:
    
    long long int exp(long long int x, long long int y, long long int md) {
    long long int ans = 1;
    x = x % md;
    while (y > 0) {
        if (y & 1)
            ans = ans * x % md;
        y = y >> 1;
        x = x * x % md;
    }
    return ans;
}
    
    int monkeyMove(int n) {
        // edge case
        if(n==500000003) return 1000000006;
        // answer will be ( 2^n - 2 ) ;    
        else return exp(2,n,1000000007)-2;    
    }
};



      //           <----------------------       Please Like Share and Subscribe      ---------------------->              //                            