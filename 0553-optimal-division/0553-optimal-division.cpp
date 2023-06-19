class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        string s="";
        if(nums.size()==1) return to_string(nums[0]);
        if(nums.size()==2) return to_string(nums[0]) + "/" + to_string(nums[1]);
        s += to_string(nums[0]) + "/";
        s += "(";
        for(int i=1;i<nums.size()-1;i++) {
            s += to_string(nums[i]);
            s += "/";
        }
        s += to_string(nums[nums.size()-1]);
        s += ")";

        return s;
    }
};