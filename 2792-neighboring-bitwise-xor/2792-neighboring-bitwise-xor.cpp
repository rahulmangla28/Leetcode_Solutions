class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
    vector<int> nums(n,1);
        for(int i=0;i<n-1;i++) {
            if(derived[i]==1) {
                nums[i+1] = 1 - nums[i];
            }else {
                nums[i+1] = nums[i];
            }
        }
       // for(int i=0;i<n;i++) cout<<nums[i]<<" ";
        return (nums[0]^nums[n-1]) == derived[n-1];
    }
};