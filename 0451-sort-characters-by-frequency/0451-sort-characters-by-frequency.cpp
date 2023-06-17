#include <bits/stdc++.h>
class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++) mp[s[i]]++;

        priority_queue<pair<int,char>> pq;
    
        for(auto itr : mp) {
            pq.push({itr.second,itr.first});
        }
        string res = "";
        while(!pq.empty()) {
            int freq = pq.top().first;
            char ch = pq.top().second;
            pq.pop();
            while(freq) {
                res += ch;
                freq--;
            }
        }

        return res;
    }
};