class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        vector<int> left2right(k+1);
        left2right[0] = 0;
        for(int i=1;i<=k;i++) {
            left2right[i] = left2right[i-1] + cardPoints[i-1]; 
        }

        // for(int i=0;i<k+1;i++) cout<<left2right[i]<<" ";
        // cout<<endl;    

        vector<int> right2left(k+1);
        right2left[0] = 0;
        for(int i=n-1;i>=n-k;i--) {
            right2left[n-i] = right2left[n-i-1] + cardPoints[i];
        }
        reverse(right2left.begin(),right2left.end());

        // for(int i=0;i<k+1;i++) cout<<right2left[i]<<" ";
        // cout<<endl;
        
        int res = 0;
        for(int i=0;i<k+1;i++) {
            res = max(res,left2right[i]+right2left[i]);
        }

        return res;
    }
};