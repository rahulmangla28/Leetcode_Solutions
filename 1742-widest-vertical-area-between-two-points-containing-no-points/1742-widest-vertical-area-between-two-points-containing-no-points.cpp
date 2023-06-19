class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n=points.size();
         vector<int> nums;
         for(int i=0;i<n;i++){
             nums.push_back(points[i][0]);
         }
        sort(nums.begin(),nums.end());
        int a=nums[1]-nums[0];
        for(int i=0;i<n-1;i++){
            if((nums[i+1]-nums[i])>=a) 
                a=nums[i+1]-nums[i];
        }
        return a;
    }
};