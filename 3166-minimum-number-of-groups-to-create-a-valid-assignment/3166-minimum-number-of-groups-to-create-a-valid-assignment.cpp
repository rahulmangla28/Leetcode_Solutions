class Solution {
public:
    int minGroupsForValidAssignment(vector<int>& nums) {
        int n = nums.size();
        map<int, int> map;
        for (int n : nums) {
            map[n] += 1;
        }

        int min = nums.size();
        for(auto v : map) {
            if(v.second <= min) min = v.second;
            //min = min(min, v.second);
        }

        for(int size = min; size >= 1; --size) {
            int numGroups = groupify(map, size); 
            if(numGroups > 0) return numGroups;
        }
        
        return nums.size();
    }

    int groupify(map<int, int>& map, int size) {
        int groups = 0;
        int next = size + 1;

        for(auto value : map) {
            int numGroups = value.second / next;
            int remaining = value.second % next;

            if(remaining == 0) {
                groups += numGroups;
            }
            else if(numGroups >= size - remaining) {
                groups += numGroups + 1;
            } 
            else {
                return 0;
            }
        }
        return groups;
    }
};