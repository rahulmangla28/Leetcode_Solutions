class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int MOD = 1000000007;
        stack<int> stack;
        long sumOfMinimums = 0;

        for (int i = 0; i <= arr.size(); i++) {
            while (!stack.empty() && (i == arr.size() || arr[stack.top()] >= arr[i])) {
                int mid = stack.top();
                stack.pop();
                int leftBoundary = stack.empty() ? -1 : stack.top();
                int rightBoundary = i;

                long count = (mid - leftBoundary) * (rightBoundary - mid) % MOD;
                sumOfMinimums += (count * arr[mid]) % MOD;
                sumOfMinimums %= MOD;
            }
            stack.push(i);
        }
        return (int) (sumOfMinimums);
    }
};