class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st{sentence.begin(),sentence.end()};
        int n=st.size();
        if(n<26) return false;
        else return true;
    }
};