class Solution {
    
    
    
    
    
    
    
    
    
    
    
    bool isPrime(int n)
{
    // Check if n=1 or n=0
    
        
        
        
        
        
        
        
        
        
        
        
        
        if (n <= 1)
        return false;
    // Check if n=2 or n=3
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
   
        
        
        
        
        
        
        
        
        
        
        
        
        if (n % 2 == 0 || n % 3 == 0)
        return false;
     
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    
        
        
        
        
        
        
        
        
        
        
        
        for (int i = 5; i <= sqrt(n); i = i + 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
 
 
        
        
        
        
        
        return true;
}
    
    
    
    
    
    
    
    
    
    
    
    public : int diagonalPrime(vector<vector<int>>arr) {
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        int iind = 0;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        int jind = 0;
        
        
        
        
        
        
        
        
        
        
        
        
        int ans = INT_MIN;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        int sz =arr.size();
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        while(iind<sz && jind<sz){
        
            
            
            
            
            
            
            
            
            
            if(ans<arr[iind][jind] && isPrime(arr[iind][jind])==true){
            
                
                
                
                
                
                
                
                
                
                ans = arr[iind][jind];
            
            
            
            
            
            
            
            
            
            
            }
            
            
            
            
            
            
            
            
            
            
            iind++;
            
            
            
            
            
            
            
            
            jind++;
        }
      
        
        
        
        
        
        
        
        
        
        
        iind = sz-1;jind = 0;
        
        
        
        
        
        
        
        
        
        
        
        while(iind>=0 && jind<sz){
        
            
            
            
            
            
            
            
            
            
            if(ans<arr[iind][jind] && isPrime(arr[iind][jind])==true){
            
                
                
                
                
                
                
                
                
                
                
                ans = arr[iind][jind];
            
            
            
            
            
            
            
            }
            
            
            
            
            
            
            
            
            
            iind--;
            
            
            
            
            
            
            
            
            
            
            
            
            
            jind++;
        }
       
        
        
        
        
        
        
        
        
        
        
        
        return ans == INT_MIN?0:ans;
    }
};

