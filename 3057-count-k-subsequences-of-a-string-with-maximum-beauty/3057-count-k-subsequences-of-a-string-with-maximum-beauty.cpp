class Solution {
public:
    int pow(long long x, unsigned int y, int p) {
        int res = 1;     // Initialize result
    
        x = x % p; // Update x if it is more than or
                    // equal to p
    
        if (x == 0) return 0; // In case x is divisible by p;
    
        while (y > 0) {
            // If y is odd, multiply x with result
            if (y & 1)
                res = (res*x) % p;
    
            // y must be even now
            y = y>>1; // y = y/2
            x = (x*x) % p;
        }

        return res;
    }

    int comb(int n, int r) {
        double sum = 1;
        
        for(int i = 1; i <= r; i++){
            sum = sum * (n - r + i) / i;
        }

        return (int)sum;
 
    }

    int countKSubsequencesWithMaxBeauty(string s, int k) {
        int mod = 1000000007;
        map<char, int> counter;
        
        for (char c : s) {
            counter[c]++;
        }
        
        if (counter.size() < k) {
            return 0;
        }
        
        map<int, int> freq;
        for (auto it : counter) {
            freq[it.second]++;
        }
        
        vector<pair<int, int>> pairs;
        for (auto it : freq) {
            pairs.push_back(it);
        }
        
        sort(pairs.rbegin(), pairs.rend());
        
        long long int res = 1;
        for (auto it : pairs) {
            int fc = it.first;
            int occ = it.second;
            if (occ <= k) {
                res = (res * pow(fc, occ, mod)) % mod;
                k -= occ;
            } else {
                res = (res * comb(occ, k) * pow(fc, k, mod)) % mod;
                break;
            }
        }
        
        return (int)res % mod;
    }
};