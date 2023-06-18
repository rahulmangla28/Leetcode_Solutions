class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        sort(nums.begin(),nums.end(),greater<int>());
        
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                k++;
            }  
            if(k==2) return nums[i+1];   
            
           // else i++;
        }
        return nums[0];
    }
};