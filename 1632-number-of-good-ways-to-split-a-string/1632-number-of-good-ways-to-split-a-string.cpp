class Solution {
public:
    int numSplits(string s) {
        int res = 0;
        unordered_map<char,int> front;
        unordered_map<char,int> back;

        for(int i=0;i<s.size();i++) {
            back[s[i]] += 1;
        }    

        for(int i=0;i<s.size();i++) {
            front[s[i]] += 1;
            back[s[i]] -= 1;
            if(back[s[i]] ==0) back.erase(s[i]);

            if(front.size() == back.size()) res += 1;
        }

        return res;
    }
};