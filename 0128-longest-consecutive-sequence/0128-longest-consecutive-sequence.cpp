class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++) {
            st.insert(nums[i]);
        }
        int res = 0,cnt=0;
        for(int num : nums) {
            if(!st.count(num-1)) {
                int currentNum = num;
                int currentStreak = 1;

                while(st.count(currentNum+1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                res = max(res,currentStreak);
            }
        }

        return res;
    }
};