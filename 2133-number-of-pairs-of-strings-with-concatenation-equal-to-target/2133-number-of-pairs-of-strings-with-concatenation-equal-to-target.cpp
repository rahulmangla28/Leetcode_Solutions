class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n = nums.size();
        int cnt = 0; 
        unordered_map<string,string> mp;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(i!=j) {
                    string s = nums[i] + nums[j];
                    if(s==target) cnt++;
                }
            }
        }
        return cnt;
    }
};