class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int res = 0;

        map<vector<int>,int> mp;
        multiset<vector<int>> st;
        for(int i=0;i<n;i++) {
            vector<int> tmp;
            for(int j=0;j<m;j++) {
                tmp.push_back(grid[i][j]);
            }
            st.insert(tmp);
            mp[tmp] += 1;
        }    

        for(int i=0;i<m;i++) {
            vector<int> cur;
            for(int j=0;j<n;j++) {
                cur.push_back(grid[j][i]);
            }
           // for(int k=0;k<cur.size();k++) cout<<cur[k]<<" "; cout<<endl;
            if(st.find(cur) != st.end()) res += mp[cur];
        }

        return res;
    }
};