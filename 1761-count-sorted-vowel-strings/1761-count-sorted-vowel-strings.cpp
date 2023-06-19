class Solution {
public:

int printNcR(int n, int r) {
    long long p = 1, k = 1;

    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            long long m = __gcd(p, k);
 
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
 
    else
        p = 1;

    return p;
}

    int countVowelStrings(int n) {
        return printNcR(n+4,4);      
    }
};