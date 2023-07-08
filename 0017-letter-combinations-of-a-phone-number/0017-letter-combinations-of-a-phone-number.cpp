#include <bits/stdc++.h>
class Solution {
public:
    vector<string> letters =  {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    void helper(int ind,string &digits, string currStr, vector<string> &res) {
        // base case
        if(ind >= digits.size()) {
            res.push_back(currStr);
            return ;
        }

        // iterate over all possible letters of a digit
        char ch = (char)digits[ind];
        string letter = letters[ch - '0'];
        for(int i=0;i<letter.size();i++) {
            currStr += letter[i];
            helper(ind+1,digits,currStr,res);
            currStr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        if(n==0) return {};

        vector<string> res;
        helper(0,digits,"",res);
        
        return res;
    }
};