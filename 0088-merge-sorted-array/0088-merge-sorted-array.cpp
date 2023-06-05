class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ind = m-1;
        int idx = n-1;
        int k = m + n - 1;

        while(ind >= 0 && idx >= 0) {
            if(nums1[ind] < nums2[idx]) {
                nums1[k] = nums2[idx];
                k--;
                idx--;
            }else {
                nums1[k] = nums1[ind];
                k--;
                ind--;
            }
        }
        while(ind>=0) {
            nums1[k] = nums1[ind];
            k--;
            ind--;
        }
        while(idx>=0) {
            nums1[k] = nums2[idx];
            k--;
            idx--;
        }
        
    }
};