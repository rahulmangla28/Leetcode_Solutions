class Solution {
public:
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,n=nums1.size(),m=nums2.size();
        long long int a=0,b=0;
        while(i<n || j<m) {
            if(i < n && (j==m || (nums1[i] < nums2[j]))) {
                a += nums1[i];
                i += 1;
            }
            else if(j < m && (i==n || (nums1[i] > nums2[j]))) {
                b += nums2[j];
                j += 1;
            }else {
                a = b = max(a,b) + nums1[i];
                i += 1;
                j += 1;
            }
        }    

        return max(a,b) % 1000000007;
    }
};