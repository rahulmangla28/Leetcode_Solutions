class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> ans;
        for(int i=0;i<mat.size();i++){
            int k=0;
            for(int j=0;j<mat[0].size();j++){
                if (mat[i][j]==1) k++; 
            }
            pq.push({k,i});
        }

        // while(!pq.empty()) {
        //     cout<<pq.top().first<<"->"<<pq.top().second<<endl;
        //     pq.pop();
        // }

        int c=0;
        while(c < k){
            ans.push_back(pq.top().second);
            pq.pop();
            c++;
        }
        return ans;
    }
};