class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        int left = 0,right = 0,end = n-1; 
        int count = 0;

        while(right < n) {
            mp[s[right]] += 1;

            while(mp['a'] && mp['b'] && mp['c']) {
                count += (end - right + 1);
                
                mp[s[left]] -= 1;
                left ++;
            }

            right ++;
        }

        return count;
    }
};