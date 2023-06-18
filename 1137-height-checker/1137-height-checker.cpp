class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans;
        int n=0;
        for(int i=0;i<heights.size();i++){
            ans.push_back(heights[i]);
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=heights[i])
                n++;
        }
        return n;
    }
};