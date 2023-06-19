class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int k=piles.size();
        sort(piles.begin(),piles.end(),greater<int>());
        int l=0;
        int i=0;
        vector<int> nums;
        while(l<=k/3){
            nums.push_back(piles[(2*i)+1]);
            i++;
            l++;
        }
        int sum=0;
        for(int i=0;i<k/3;i++){
            sum=sum+nums[i];
        }
        return sum;
    }
};