class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<pair<int,int>> leftSum;
        int sum = 0,cnt=0;
        for(int i=0;i<n;i++) {
            leftSum.push_back({sum,cnt});
            if(boxes[i]=='1') {
                sum += (i+1);
                cnt++;
            }
        }

        vector<pair<int,int>> rightSum;
        sum = 0,cnt=0;
        for(int i=n-1;i>=0;i--) {
            rightSum.push_back({sum,cnt});
            if(boxes[i]=='1') {
                sum += (i+1);
                cnt++;
            }
        }
        reverse(rightSum.begin(),rightSum.end());
        // for(int i=0;i<n;i++) cout<<leftSum[i].first<<" ";
        // for(int i=0;i<n;i++) cout<<rightSum[i].first<<" ";

        vector<int> arr(n,0);
        for(int i=0;i<n;i++) {
            if(leftSum[i].first!=0) {
                arr[i] += abs(leftSum[i].second*(i+1) - leftSum[i].first);
            }
            if(rightSum[i].first!=0) {
                arr[i] += abs(rightSum[i].second*(i+1) - rightSum[i].first);
            }
        }

        return arr;
    }
};