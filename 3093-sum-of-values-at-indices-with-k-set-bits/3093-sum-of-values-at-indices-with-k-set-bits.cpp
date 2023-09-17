class Solution {
public:
    bool check(int n,int k) {
        int cnt = 0;
        while(n) {
            if(n%2 == 1) cnt += 1;
            n /= 2;
        }
        
        return (cnt == k);
    }
    
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;
        for(int i=0;i<n;i++) {
            if(check(i,k)) res += nums[i];
            //cout<<res<<" ";
        }
        
        return res;
    }
};