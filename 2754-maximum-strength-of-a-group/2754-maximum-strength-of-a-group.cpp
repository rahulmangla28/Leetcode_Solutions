class Solution {
public:
    long long maxStrength(vector<int>& rahul) {
        int n = rahul.size();
        
        if (n == 1)
        return rahul[0];
 
    // Find count of negative numbers, count
    // of zeros, negative number
    // with least absolute value
    // and product of non-zero numbers
    int maxi = INT_MIN;
    int alpha = 0, hai = 0;
    long long int res = 1;
    for (int i = 0; i < n; i++) {
 
        // If number is 0, we don't
        // multiply it with product.
        if (rahul[i] == 0) {
            hai++;
            continue;
        }
 
        // Count negatives and keep
        // track of negative number
        // with least absolute value
        if (rahul[i] < 0) {
            alpha++;
            maxi = max(maxi, rahul[i]);
        }
 
        res = res * rahul[i];
    }
 
    // If there are all zeros
    if (hai == n)
        return 0;
 
    // If there are odd number of
    // negative numbers
    if (alpha & 1) {
 
        // Exceptional case: There is only
        // negative and all other are zeros
        if (alpha == 1 &&
            hai > 0 &&
            hai + alpha == n)
            return 0;
 
        // Otherwise result is product of
        // all non-zeros divided by
        //negative number with
        // least absolute value
        res = res / maxi;
    }
 
    return res;
    }
};