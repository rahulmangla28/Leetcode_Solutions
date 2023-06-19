class Graph {
public:
    vector<pair<int,int>>adjency[101];
    int sz;
    Graph(int n, vector<vector<int>>& edges) {
        sz=n;
        
        for(auto itr:edges){
            
            adjency[itr[0]].push_back({itr[1],itr[2]});
         } 
    }

    void addEdge(vector<int> edge) {
        
        adjency[edge[0]].push_back({edge[1],edge[2]});
    
    }
    
    int shortestPath(int node1, int node2) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pro;
        vector<int>dis(sz+1,1e9);
        dis[node1]=0;
        
        pro.push({0,node1});
        
        while(!pro.empty()){
            
            int alpha=pro.top().first;
            int Treenode=pro.top().second;
            pro.pop();
            for(auto it:adjency[Treenode]){
                if(alpha+it.second<dis[it.first]){
                    dis[it.first]=alpha+it.second;
                    pro.push({dis[it.first],it.first});
                }
            }
        }
        if(dis[node2]==1e9) return -1;
        return dis[node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->longestPath(node1,node2);
 */