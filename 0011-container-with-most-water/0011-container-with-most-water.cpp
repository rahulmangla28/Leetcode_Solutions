class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxarea = 0;
        int left = 0;
        int right = n-1;

        while(left<right) {
            int width = right - left;
            maxarea = max(maxarea , min(height[left],height[right])*width);
            if(height[left]<=height[right]) left++;
            else right--;
        }

        return maxarea;
    }
};