class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0,a=0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            if(sum>a)
                a=sum;
            sum=0;
        }
        return a;
    }
};