class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> arr(106,0);
        arr[1] = 1;
        for(int i=1;i<=52;i++) {
            arr[2*i] = arr[i];
            arr[2*i+1] = arr[i] + arr[i+1];
        }

        return *max_element(arr.begin(),arr.begin() + n + 1);
    }
};