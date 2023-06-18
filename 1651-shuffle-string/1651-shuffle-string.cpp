class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> ans(indices.size());
        for(int i=0;i<indices.size();i++){
            ans[indices[i]]=s[i];
        }
        string s1="";
        for(auto i:ans) s1+=i;
        return s1;//ans.toString();
    }
};