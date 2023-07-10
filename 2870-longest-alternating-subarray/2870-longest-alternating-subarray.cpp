class Solution {
public:
        int alternatingSubarray(vector<int>& A) {
        int n = A.size(), res = -1, dp = -1;
        for (int i = 1; i < n; ++i, res = max(res, dp))
            if (dp > 0 && A[i] == A[i - 2])
                dp++;
            else
                dp = A[i] == A[i - 1] + 1 ? 2 : -1;
        return res;
    }
};