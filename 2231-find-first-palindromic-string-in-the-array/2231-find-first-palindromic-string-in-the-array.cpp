class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int k=0;k<n;k++){
            int i=0,j=words[k].size()-1;
            bool flag=true;
            while(i<=j){
                if(words[k][i]!=words[k][j]) flag=false;
                i++;
                j--;
            }
            if(flag==true) return words[k];
        }
        return "";
    }
};