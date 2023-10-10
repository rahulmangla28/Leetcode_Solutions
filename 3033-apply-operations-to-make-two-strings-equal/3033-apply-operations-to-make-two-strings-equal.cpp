//Flip one bit with cost x/2.0
class Solution {
public:
    vector<double> dp;
    int sz;
    double cost(int i, vector<int>& flip, int x){
        if (i>=sz) return 0;
    //    if (i==sz-2) return dp[i]=min(x, flip[sz-1]-flip[i]);
        if (dp[i]!=-1) return dp[i];
        double ans=INT_MAX;
        //Flip at position flip[i] with cost x/2.0
        ans=min(ans, x/2.0+cost(i+1, flip, x));
        if (i+2 <= sz) 
            ans=min(ans, min(flip[i+1]-flip[i], x)+cost(i+2, flip, x));
        return dp[i]=ans;
    }

    int minOperations(string s1, string s2, int x) {
        int n=s1.size();
        vector<int> flip;
        #pragma unroll
        for(int i=0; i<n; i++){
            if (s1[i]!=s2[i]) 
                flip.push_back(i);
        }
        sz=flip.size();
        if ( sz& 1) return -1;
        dp.assign(sz,-1);
        return cost(0, flip, x);
    }
};