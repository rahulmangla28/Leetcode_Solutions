class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> arr(n,-1);
        
        queue<int> q;
        q.push(0);
        while(!q.empty()) {
            int val = q.front();
            q.pop();
            
            arr[val]=1;
            for(int i=0;i<rooms[val].size();i++) {
                if(arr[rooms[val][i]]==-1) {
                    q.push(rooms[val][i]);
                }
            }
        }
        
        for(int i=0;i<n;i++) {
            if(arr[i]==-1) return false;
        }
        
        return true;
        
    }
};