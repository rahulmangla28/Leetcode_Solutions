class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int ind = 0;
        for(int i=0;i<n;i++) {
            if(arr[i]==0) ind++;
            else if(ind>0) {
                arr[i-ind] = arr[i];
                arr[i] = 0;
            }
        }
    }


};