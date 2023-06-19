class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        vector<int> freq(10,0);
        for(int i=0;i<nums1.size();i++) {
            freq[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++) {
            freq[nums2[i]]++;
        }
        
        int ans=-1;
        for(int i=0;i<freq.size();i++) {
            if(freq[i]>1) {
                ans = i;
                break;
            }
        }
        
        if(ans!=-1) {
            return ans;
        }else {
            int mini = min(nums1[0],nums2[0]);
            int maxi = max(nums1[0],nums2[0]);
            ans = 10*mini + maxi;
            return ans;
        }
    }
};