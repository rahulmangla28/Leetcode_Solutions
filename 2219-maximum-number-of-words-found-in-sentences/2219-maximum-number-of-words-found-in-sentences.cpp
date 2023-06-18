class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0,n=0;
        for(int i=0;i<sentences.size();i++){
            n=0;
            for(int j=0;j<sentences[i].length();j++){
            if(sentences[i][j]==' '){
                n++;
            }
            }
            if(n>ans)
                ans=n;
        }
        return ans+1;
    }
};