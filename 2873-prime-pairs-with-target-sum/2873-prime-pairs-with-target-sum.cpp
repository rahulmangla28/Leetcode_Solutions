unordered_set<int> st;
vector<int> primes;
    
class Solution {
public:
    void getPrimes(int n ){
        vector<bool> isPrime(n, 1);
        for(int i = 2; i <= sqrt(n); ++i){
          if(isPrime[i]){
            for(int j = i*i; j < n; j += i ) isPrime[j] = false;
          }
        }
        for(int i = 2; i < isPrime.size(); ++i) {
          if(isPrime[i]) { st.insert(i); primes.push_back(i); }
        }
    }

    vector<vector<int>> findPrimePairs(int n) {
        if(st.size() == 0) getPrimes(1000000); cout<<primes.size();
        vector<vector<int>> ans;
        for(int i = 0; i < primes.size() && primes[i] <= n/2; ++i){
            if(st.find(n - primes[i]) != st.end()) {  ans.push_back({primes[i], n - primes[i]});  }
        }
        return ans;
    }
};