class Solution {
    set<int> seen;
    const int MAX_EDGE_VAL = 1000;

public:
    vector<int> findRedundantConnection(vector<vector<int>> edges) {
        vector<vector<int>> graph(MAX_EDGE_VAL + 1);
        for (auto edge : edges) {
            seen.clear();
            if (!graph[edge[0]].empty() && !graph[edge[1]].empty() &&
                dfs(graph, edge[0], edge[1])) {
                return edge;
            }
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        throw std::runtime_error("AssertionError");
    }
    bool dfs(vector<vector<int>>& graph, int source, int target) {
        if (seen.find(source) == seen.end()) {
            seen.insert(source);
            if (source == target) return true;
            for (int nei : graph[source]) {
                if (dfs(graph, nei, target)) return true;
            }
        }
        return false;
    }
};