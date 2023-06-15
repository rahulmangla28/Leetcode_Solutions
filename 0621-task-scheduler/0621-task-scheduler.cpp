class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int sz = tasks.size();
        int count = 0;
        map<char,int> mp;

        for(int i=0;i<sz;i++) {
            mp[tasks[i]]++;
            count = max(count,mp[tasks[i]]);
        }    

        int res = (count-1)*(n+1);
        for(auto it : mp) {
            if(it.second == count) res++;
        }

        return max(res,sz);
    }
};