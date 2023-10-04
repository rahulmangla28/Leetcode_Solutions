class Solution {
public:
    void fillCycle(vector<int>& edges, vector<bool>& visited, vector<int>& result, int start) {
        int length = 0;
        for (int x = start; !visited[x]; x = edges[x]) {
            visited[x] = true;
            length++;
        }
        result[start] = length;
        for (int x = edges[start]; x != start; x = edges[x]) {
            result[x] = length;
        }
    }

    vector<int> countVisitedNodes(vector<int>& edges) {
        int n = edges.size();
        vector<int> indegree(n,0);
        vector<int> res(n,0);
        vector<bool> vis(n,false);

        for(int i=0;i<n;i++) {
            indegree[edges[i]] += 1;
        }

        queue<int> q;
        stack<int> stk;
        for(int i=0;i<n;i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        while(!q.empty()) {
            int node = q.front();
            q.pop();
            stk.push(node);
            vis[node] = true;

            if(!--indegree[edges[node]]) {
                q.push(edges[node]);
            }
        }

        for(int i=0;i<n;i++) {
            if(!vis[i]) {
                fillCycle(edges, vis, res, i);
            }
        }

        while(!stk.empty()) {
            int x = stk.top();
            stk.pop();

            res[x] = res[edges[x]] + 1;
        }

        return res;
    }
};