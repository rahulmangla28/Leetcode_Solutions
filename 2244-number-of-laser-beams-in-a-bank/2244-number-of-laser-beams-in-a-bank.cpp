class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> arr;
        int n = bank.size();
        int m = bank[0].size();

        for(int i=0;i<n;i++) {
            int cnt = 0; 
            for(int j=0;j<m;j++) {
                if(bank[i][j]=='1') cnt++;
            }
            if(cnt!=0) arr.push_back(cnt);
        }

        // for(int i=0;i<arr.size();i++) {
        //     cout<<arr[i]<<" ";
        // }

        long long int ans = 0;
        for(int i=1;i<arr.size();i++) {
            ans += (arr[i]*arr[i-1]) ;
        }

        return ans;
    }
};