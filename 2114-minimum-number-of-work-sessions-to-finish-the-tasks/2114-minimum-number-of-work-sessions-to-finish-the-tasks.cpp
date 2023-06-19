class Solution {
public:

    vector<int> sessions;
    unordered_map<string,int> dp;

    string encoded(int pos,vector<int> sessions) {
        vector<int> copy = sessions;
        sort(copy.begin(),copy.end());

        string key = to_string(pos) + "$";
        for(int i=0;i<copy.size();i++) {
            key += to_string(copy[i]) + "$";
        }
        return key;

    }

    int fun(int pos,vector<int> &tasks,int sessionTime) {
        if(pos>=tasks.size()) return 0;

        string key = encoded(pos,sessions);

        if(dp.find(key)!=dp.end()) return dp[key];

        sessions.push_back(tasks[pos]);
        int ans = 1 + fun(pos+1,tasks,sessionTime);
        sessions.pop_back();

        for(int i=0;i<sessions.size();i++) {
            if(sessions[i] + tasks[pos] <= sessionTime) {
                sessions[i] += tasks[pos];
                ans = min(ans,fun(pos+1,tasks,sessionTime));
                sessions[i] -= tasks[pos];
            }
        }

        return dp[key]=ans;

    }

    int minSessions(vector<int>& tasks, int sessionTime) {
        int n = tasks.size();
        return fun(0,tasks,sessionTime);
    }
};