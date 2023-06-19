class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& div) {
        int n = div.size();
        int m = nums.size();
        
        sort(div.begin(),div.end());
        int maxi=0,ans=-1;
        for(int i=0;i<n;i++) {
            int divisor = div[i];
            int cnt=0;
            for(int j=0;j<m;j++) {
                if(nums[j]%divisor==0) cnt++;
            }
            if(cnt>maxi) {
                maxi = cnt;
                ans = divisor;
            }
        }
        
        return ans > 0 ? ans : *min_element(div.begin(),div.end());
    }
};