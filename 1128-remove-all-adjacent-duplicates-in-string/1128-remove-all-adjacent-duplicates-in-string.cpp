class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && s[i]==st.top())
              while(!st.empty() && (s[i]==st.top())) st.pop();
               // else st.push(s[i]);
            
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