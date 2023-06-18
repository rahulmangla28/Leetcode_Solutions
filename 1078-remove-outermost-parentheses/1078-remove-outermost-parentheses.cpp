class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string v="";
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')') st.pop();
            if(st.size()==0) {
                for(int d=j+1;d<i;d++) v.push_back(s[d]);
                j=i+1;
            }
        }
        return v;
    }
};