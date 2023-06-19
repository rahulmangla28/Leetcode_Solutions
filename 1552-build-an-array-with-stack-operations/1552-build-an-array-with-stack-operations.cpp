class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        stack<int> st;
        for(int i=n;i>=1;i--) st.push(i);
        for(int i=0;i<target.size();){
            if(st.top()==target[i]){
                v.push_back("Push");
                i++;
                st.pop();
            }
            else {
                v.push_back("Push");
                v.push_back("Pop");
                st.pop();
            }
        }
        return v;
    }
};