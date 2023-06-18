class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> v;
        for(int i=0;i<n-1;i++){
            int j=i+1;
            while(v.size()!=(i+1)){
            if(prices[j]<=prices[i]){
                v.push_back(prices[i]-prices[j]);
            }
            else if(j==(n-1)){
                v.push_back(prices[i]);
                break;
            }
            else j++;
            }
        }
        v.push_back(prices[n-1]);
        return v;
    }
};