class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!st.empty() && abs(s[i]-st.top())==32) st.pop();
            else st.push(s[i]);
        }
        string v="";
        while(!st.empty()){
            v+=st.top();
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};