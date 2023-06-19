class Solution {
public:

    // bool helper(int ind,vector<int> &arr) {
    //     if(arr[ind]==0) return true;

    //     if(ind>=0 && ind<arr.size()) {
    //         if(helper(ind-arr[ind],arr) || helper(ind+arr[ind],arr)) 
    //             return true;
    //     }
        
    //     return false;
    // }
    // bool canReach(vector<int>& arr, int start) {
    //     return helper(start,arr);
    // }

    bool canReach(vector<int>& A, int cur) {
        if(cur < 0 || cur >= size(A) || A[cur] < 0) return false;                  // out of bounds OR already visited ? return false
        A[cur] *= -1;       // mark as visited by making -ve
        return !A[cur] || canReach(A, cur + A[cur]) || canReach(A, cur - A[cur]);  // return true if A[cur] == 0 or recurse for both possible jumps
    }
};