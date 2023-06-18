class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        int k,a;
        for(int i=0;i<=n;i++){
            a=i;
            while(i!=0){
            if((i%2)==1) k++;
            i=i/2;
            }
                ans[a]=k;
                k=0;
               i=a;
        }
        return ans;
    }
};