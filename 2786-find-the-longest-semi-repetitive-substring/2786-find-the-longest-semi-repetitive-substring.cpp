class Solution {
public:
    vector<string> nums;
 
    
    
    
    
    
    
    
    
    
    
    void haiKuchFunction(string str)
{
 
    // First loop for starting index
    for (int i = 0; i < str.length(); i++) {
        string subStr;
        // Second loop is generating sub-string
    }
}
 
    
    int longestSemiRepetitiveSubstring(string s) {
    
        
        
        
        int mid = 0;
        
        
        
        
        
        
        
        
        
        
        int left = 0 , right = 0;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        int ind = 0,len=-1;
        
        
        
        
        
        
        
        
        
        
        int n = s.size();
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        unordered_map<int,int> mp;
       // int cnt = 0;
        //allSubStrings(s);
        
        
        
        
        
        
        
        
        
        
        
        
        
        int res = 1;
        
      
        
        
        
        
        
        
        
        
        
        
        for(int i=0;i<n;i++) {
        
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            if( i > 0 && s[i-1]==s[i]) {
                right += 1;
            }
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            while(right > 1) {
            
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                if(i > mid && s[mid]==s[mid+1]) right -= 1;
                
                
                
                
                
                
                
                
                
                
                
                
                mid += 1;
            }
            res = max(res,i-mid+1);
        }
    
        return res;
    }
};