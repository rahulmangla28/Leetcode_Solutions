class Solution {
public:

    unordered_map<string, int>mp;

    // int solve(string s,vector<string> &dict,int ind) {
    //     if(ind>=s.size()) return 0;

    //     string currStr = "";
    //     int minExtra = s.size();
    //     for(int cutIndex=ind;cutIndex<s.size();cutIndex++) {
    //         currStr.push_back(s[cutIndex]);

    //         int currExtra = mp.count(currStr) ? 0 : currStr.size();
    //         int nextExtra = solve(s,dict,ind+1);
    //         int totalExtra = currExtra + nextExtra;

    //         minExtra = min(minExtra,totalExtra);
    //     }

    //     return minExtra;
    // }

    int minExtraChar(string s, vector<string>& dict) {
        
        int n = s.size();
        for (string& word : dict) mp[word]++;
        vector<int> dp(n+1,0);

        for(int ind=n-1;ind>=0;ind--) {
            
            string currStr = "";
            int minExtra = s.size();

            for(int cutIndex=ind;cutIndex<s.size();cutIndex++) {
                currStr.push_back(s[cutIndex]);

                int currExtra = mp.count(currStr) ? 0 : currStr.size();
                int nextExtra = dp[cutIndex+1];
                int totalExtra = currExtra + nextExtra;

                minExtra = min(minExtra,totalExtra);
            }

            dp[ind] = minExtra;
        }

        return dp[0];
    }
};