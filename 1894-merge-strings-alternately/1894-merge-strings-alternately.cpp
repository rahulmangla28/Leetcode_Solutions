class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string nums;
        int n=word1.size();
        int k=word2.size();
        int i=0,j=0;
        while(i<n || j<k){
            if(i<n){
                nums.push_back(word1[i]);
                i++;
            }
            if(j<k){
                nums.push_back(word2[j]);
                j++;
            }
        }
        return nums;
    }
};