class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        vector <string> str{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<words.size();i++){
            string st="";
            for(int j=0;j<words[i].size();j++){
                st+=str[words[i][j]-'a'];
            }
            s.insert(st);
        }
        return s.size();
    }
};