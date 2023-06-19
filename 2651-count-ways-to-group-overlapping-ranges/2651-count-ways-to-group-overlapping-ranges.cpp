class Solution {
public:
    int functionAns(int base,int power,int remainder){
        
         if(power==1){
             
             
        return base;
             
             
    }
        
        
    if(power==0){
        
        
        return 1;
        
        
    }
   
        
        
    long long  ans=functionAns(base,power/2,remainder);
        
        
    ans=(ans*ans)%remainder;
        
        
        
    if(power%2==1){
        
        
        ans=(ans*base)%remainder;
        
        
        
        
    }
        
        
    return ans;
        
        
}
    int countWays(vector<vector<int>>& ranges) {
        
        
        sort(ranges.begin(),ranges.end());
        
        
        
        vector<vector<int>> arr;
        
        
        
        for(auto &ind: ranges){
            
            
            
            if(arr.size()==0 or arr.back()[1]<ind[0]){
                
                arr.push_back(ind);
                
                
                
            }
            
            else{
                
                
                arr.back()[1]=max(arr.back()[1],ind[1]);
                
                
            }
            
            
        }
        
        
        int size=arr.size();
        
        
        
        return functionAns(2,size,1e9+7);
        
        
        
        

    }
};