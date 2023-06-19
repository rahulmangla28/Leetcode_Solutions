class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int n=rungs.size();
        vector<int> v;
        for(int i=0;i<n-1;i++){
            v.push_back(rungs[i+1]-rungs[i]);
        }
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>dist) ans+=(v[i]-1)/dist;
        }
        if(rungs[0]>dist) return ans+(rungs[0]-1)/dist;
        return ans;
    }
};