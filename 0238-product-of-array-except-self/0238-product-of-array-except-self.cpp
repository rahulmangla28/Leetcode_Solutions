class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1,cnt=0,ind;
        vector<int> answer;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pro=pro*nums[i];
            if(nums[i]==0) {
                cnt++;
                ind=i;
            }
        }
        if(cnt>1){
            for(int i=0;i<n;i++) answer.push_back(0);
        }
        int pro1=1;
        if(cnt==1){
        for(int i=0;i<ind;i++)  pro1=pro1*nums[i];
        for(int i=ind+1;i<n;i++) pro1=pro1*nums[i];
        }
            if(cnt==1){
            for(int i=0;i<n;i++){
                if (nums[i]!=0) answer.push_back(pro/nums[i]);
                else answer.push_back(pro1);
            }
            }
            else if(cnt==0) {
                for(int i=0;i<n;i++){
                 answer.push_back(pro/nums[i]);
            }
            }
        return answer;
    }
};