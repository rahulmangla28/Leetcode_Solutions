                                                  // genius_koder //
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> mp;
        int i=0,j=0;
        while(key[j]!='\0') {
            if(mp.find(key[j]) == mp.end() && key[j]!=' ') {
                mp[key[j]]='a'+i;
                i++;
            }
            j++;
        }
        string s="";
        i=0,j=0;
        while(message[j]!='\0') {
            if(message[j]!=' ') {
                s+=mp[message[j]];
            }
            else s+=" ";
            j++;
        }
        return s;
        
    }
};