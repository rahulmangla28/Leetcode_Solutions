class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> cnt;
        for (auto c: basket1) cnt[c]++;
        for (auto c: basket2) cnt[c]--;
        vector<int> last;
        for (auto &[k, v]: cnt) {
            if (v % 2) return -1;
            for (int i = 0; i < abs(v) / 2; ++i)
                last.push_back(k);
        }
        int minx = *min_element(basket1.begin(), basket1.end());
        minx = min(minx, *min_element(basket2.begin(), basket2.end()));
        sort(last.begin(), last.end());
        long long res = 0;
        int m = last.size();
        for (int i = 0; i < m / 2; ++i) {
            res += min(last[i], minx * 2);
        }
        return res;
    }
};