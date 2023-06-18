class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> v{'a','e','i','o','u','A','E','I','O','U'};
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            if(v.find(s[i])!=v.end() && v.find(s[j])!=v.end()){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(v.find(s[i])!=v.end() && v.find(s[j])==v.end()) j--;
            else if(v.find(s[i])==v.end() && v.find(s[j])!=v.end()) i++;
            else {
                i++;
                j--;
            }
        }
        return s;
    }
};