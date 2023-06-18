class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                int j=0,k=i;
                while(k>=j){
                    swap(word[k],word[j]);
                    j++;
                    k--;
                }
                break;
            }
        }
        return word;
    }
};