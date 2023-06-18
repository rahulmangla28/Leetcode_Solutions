class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,char> mp;
        for(int i=0;i<jewels.size();i++){
            mp.insert({jewels[i],i});
        }
        int cnt=0;
        for(int i=0;i<stones.size();i++){
            if(mp.find(stones[i])!=mp.end()) cnt++;
        }
        return cnt;
        // int cnt=0;
        // for(int i=0;i<jewels.size();i++){
        //     cnt+=count(stones.begin(),stones.end(),jewels[i]);
        // }
        // return cnt;
    }
};