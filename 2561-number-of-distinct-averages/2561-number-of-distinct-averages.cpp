class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
        int n = nums.size();
        vector<double> arr(n/2);
        int ind = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<(n/2);i++) {
            double val = nums[i]+nums[n-1-i];
            val/=2;
            arr[ind++] = val;
        }
        
        sort(arr.begin(),arr.end());
        int cnt = 0;
        map<double,int> mp;
        
        for(int i=0;i<arr.size();i++) {
            mp[arr[i]]++;
            //cout<<arr[i]<<" ";
        }
        
        for(auto it : mp) {
            cnt++;
        }
        return cnt;
    }
};