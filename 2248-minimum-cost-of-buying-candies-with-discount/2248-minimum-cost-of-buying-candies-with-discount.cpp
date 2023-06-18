class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int sum=0;
        int n=cost.size();
        for(int i=0;i<n;i++){
            sum=sum+cost[i];
        }
        for(int i=2;i<n;i=i+3){
            sum=sum-cost[i];
        }
        return sum;
    }
};