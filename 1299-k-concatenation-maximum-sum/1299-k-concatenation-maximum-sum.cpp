class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        int n = arr.size();
        int sum = arr[0],maxi=arr[0];
        int64_t total = accumulate(arr.begin(), arr.end(), 0);
        for(int i=1;i<n*min(k,2);i++) {
            sum = max(arr[i%n],arr[i%n]+sum) ;
            maxi = max(maxi,sum);
        }

        return max<int64_t>({0, maxi, total * max(0, k - 2) + maxi}) % 1000000007;

    }
};