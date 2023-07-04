class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pq) {
        
        vector<int> inDegree(n,0);
        vector<int> topoSort;
        
        unordered_map<int,vector<int>> mp;
        for(vector<int> it : pq) {
            mp[it[1]].push_back(it[0]);
            inDegree[it[0]]++ ;
        }
        
        queue<int> q;
        for(int i=0;i<n;i++) {
            if(inDegree[i]==0) {
                q.push(i);
                topoSort.push_back(i);
            }
        }
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            for(auto it : mp[node]) {
                inDegree[it]-- ;
                if(inDegree[it]==0) {
                    q.push(it);
                    topoSort.push_back(it);
                }
            }
        }
        
        return topoSort.size() == n ;
    }
};