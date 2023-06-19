class Solution {
public:

    int search(vector<int> nums, int l, int r) {
        if (l == r)
            return l;
        int mid = (l + r) / 2;
        if (nums[mid] > nums[mid + 1])
            return search(nums, l, mid);
        return search(nums, mid + 1, r);
    }

    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        return search(nums,0,n-1);
 
    }
}; 