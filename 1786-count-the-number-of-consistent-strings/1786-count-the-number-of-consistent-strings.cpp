class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=0;
        set<char> a;
        int e=allowed.size();
        for(int i=0;i<e;i++){
            a.insert(allowed[i]);
        }
        for(int i=0;i<words.size();i++){
            bool flag=true;
            for(int j=0;j<words[i].size();j++){
                if(a.find(words[i][j])==a.end()){
                    flag=false;
                    break;
                }
            }
            if (flag==true){
                n++;
            }
        }
        return n;
    }
};