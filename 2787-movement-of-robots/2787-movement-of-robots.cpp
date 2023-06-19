class Solution {
public:
    int sumDistance(vector<int>& nums, string str, int dist) {
        
       
        
        
        
        
        
        
        
        vector<int> dup = nums;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        sort(nums.begin(),nums.end());
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        for(int ind = 0 ; ind < str.size(); ind ++) {
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            if(str[ind] == 'R') dup[ind] += dist;
        
            
            
            
            
            
            
            
            
            
            
            
            else dup[ind] -= dist;
           }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        sort(dup.begin(),dup.end());
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        nums = dup;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        long long res = 0;
        long long judaHua = 0;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        for(int ind = 0;ind<nums.size();ind++) {
        
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            res = res + 1LL*nums[ind]*ind - judaHua;
            
            res = res % 1000000007;
            
            
            
            
            
            
            
            
            
            
            
            
            judaHua = judaHua + nums[ind];
            
            
            judaHua = judaHua % 1000000007;
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        res = res % (1000000007);
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        return res;
    }
};