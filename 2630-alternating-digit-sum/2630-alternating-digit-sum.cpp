class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> arr;
        while(n!=0) {
            arr.push_back(n%10);
            n /= 10;
        }
        int sum = 0;
        for(int i=arr.size()-1;i>=0;i = i-2) {
            sum += arr[i];
        }
        for(int i=arr.size()-2;i>=0;i=i-2) {
            sum -= arr[i];
        }
        return sum;
    }
};