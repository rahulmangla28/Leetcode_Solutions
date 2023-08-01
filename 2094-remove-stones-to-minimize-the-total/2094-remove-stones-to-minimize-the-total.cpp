class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();
        priority_queue<int> pq;
        for(int i=0;i<n;i++) pq.push(piles[i]) ;
        while(k--) {
            int val = pq.top();
            pq.pop();
            val -= val/2;
            pq.push(val);
        }

        int res = 0;
        while(!pq.empty()) {
            res += pq.top();
            pq.pop();
        }

        return res;
    }
};