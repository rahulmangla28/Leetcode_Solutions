class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int cnt = 0,val=capacity;
        for(int i=0;i<n;i++) {
            if(plants[i]<=val) {
                val -= plants[i];
            }
            else if(plants[i]>val) {
                cnt += 2*(i);
                i--;
                val = capacity;
            }
        }

        return (cnt + n);
    }
};