class Solution {
public:
    vector<vector<int>> dp;

    int ustaad(int ind, vector<int>& nums, int ram, int kanha,int size) {
        
        
        
        
        
        if (ind == size) {
            return 1;
        }
        
        
        
        
        
        
        
        
        
        
        
        
        if (dp[ram + 1][kanha] != -1) {
        
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            return dp[ram + 1][kanha];
            
            
            
            
            
            
            
            
            
            
            
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        int uttar = 0;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        for (int jInd = 0; jInd < size; jInd++) {
        
            
            
            
            
            
            
            
            
            
            
            
            
            
            if (kanha & (1 << jInd)) {
            
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                continue;
            }
         
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            if (ram == -1 || 
            
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                nums[ram] % nums[jInd] == 0 || 
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                nums[jInd] % nums[ram] == 0) 
            {    
               
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                uttar = uttar + ustaad( ind + 1,nums, jInd, kanha | (1 << jInd),size);
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                uttar %= 1000000007;
            }
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        dp[ram + 1][kanha] = uttar;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        return dp[ram + 1][kanha];
    }

    int specialPerm(vector<int>& nums) {
       
        
        
        
        
        
        
        
        
        
        
        
        
        dp.resize(20, vector<int>((1 << 14) + 5, -1));
        
        return ustaad(0,nums, -1, 0,nums.size());
    }

};