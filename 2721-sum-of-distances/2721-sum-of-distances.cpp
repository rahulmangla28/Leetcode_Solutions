class Solution {
public:
    vector<long long> distance(vector<int>& arr) {
   
        
        
        
        
        
        
        
        
        
        
        //a b c d e (such that a<b<c<d<e)
//let's assume a,b,c,d,e are indices such that arr[a]=arr[b]=arr[c]=arr[d]=arr[e]
//now assume we are stading at index 'c' then 
// ans[c] = |c-a| + |c-b| + |d-c| + |e-c| -----(1)
//we can divide it into two parts 1.) occuring before index 'c' 2.) occuring after index 'c'
//let's say count of indexes occuring before index 'c' be cnt1=2(which is 2 here) and sum of those indices is a+b (here)

//let's say count of indexes occuring after index 'c' be cnt2=2(which is 2 here) and sum of those indices is d+e (here)

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//then equation 1 boils down to
// cnt1*c - (a+b) + (d+e) - cnt2*c
// 2*c-(a+b) + (d+e) - 2*c

        
        
        
        
        
        
        int n=arr.size();
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        unordered_map<int,long long> sm;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        unordered_map<int,long long> cm;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        vector<long long> ans(n,0);
        
        //first loop for first part of condition when we considering all the indices occuring before the curr_idx
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        for(int i=0;i<n;i++){
        
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            if(cm.find(arr[i])==cm.end()){
            
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                cm[arr[i]]++;
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                sm[arr[i]]+=i;
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                ans[i]=0;
            }
          
            
            
            
            
            
            
            
            
            
            
            
            
            
            else{
            
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                long long cnt=cm[arr[i]];
                
                
                
                
                
                
                
                
                
                
                
                
                
                long long before_sum=sm[arr[i]];
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                ans[i]=(long long)cnt*i - (before_sum);
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                cm[arr[i]]++;
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                sm[arr[i]]+=i;
            }
        }
        
        
        
        
        
        
        
        
        
        cm.clear();
        
        
        
        
        
        
        
        
        
        
        
        
        
        sm.clear();
        
        
        //second loop for second part of condition when we considering all the indices occuring after the curr_idx
        
        
        
        
        
        
        
        
        
        
        for(int i=n-1;i>=0;i--){
        
            
            
            
            
            
            
            
            
            
            
            if(cm.find(arr[i])==cm.end()){
            
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                cm[arr[i]]++;
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                sm[arr[i]]+=i;
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                ans[i]+=0;
            }
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            else{
            
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                long long cnt=cm[arr[i]];
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                long long after_sum=sm[arr[i]];
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                ans[i]+=after_sum - (long long)(cnt*i);
                
                
                
                
                
                
                
                
                
                
                
                
                
                cm[arr[i]]++;
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                sm[arr[i]]+=i;
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<ans[i]<<" ";
        // }
        return ans;

    }
};