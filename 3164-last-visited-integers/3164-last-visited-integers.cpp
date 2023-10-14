class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        int n = words.size();
        vector<int> res;
        vector<int> vis;
        int cnt = 0;
        for(int i=0;i<n;i++) {
            if(words[i] != "prev") {
                vis.push_back(stoi(words[i]));
                cnt = 0;
            }else {
                cnt += 1;
                reverse(vis.begin(),vis.end());
                if(cnt > vis.size()) res.push_back(-1);
                else res.push_back(vis[cnt-1]);
                reverse(vis.begin(),vis.end());
            }
        }
        return res;
    }
};