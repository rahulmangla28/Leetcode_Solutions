class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=2) return 0;
        int a=nums[0],b=nums[nums.size()-1];
        int l=0,m=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==a) l++;
            if(nums[i]==b) m++;
        }
        if(a!=b)
        return nums.size()-(l+m);
        else return nums.size()-l;
    }
};