class Solution {
public:
    int subarraysWithKDistinct(vector<int>& A, int K) {
        return subarraysWithAtMostKDistinct(A, K) - subarraysWithAtMostKDistinct(A, K-1);
    }
    
    int subarraysWithAtMostKDistinct(vector<int>& s, int k) {
        unordered_map<int, int> lookup;
        int l = 0, r = 0, counter = 0, res = 0;
        while (r < s.size()) {
            lookup[s[r]]++;
            if (lookup[s[r]] == 1) {
                counter++;
            }
            r++;
            while (l < r && counter > k) {
                lookup[s[l]]--;
                if (lookup[s[l]] == 0) {
                    counter--;
                }
                l++;
            }
            res += r - l;
        }
        return res;
    }
};
