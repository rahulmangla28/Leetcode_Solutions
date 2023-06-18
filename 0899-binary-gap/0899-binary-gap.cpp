class Solution {
public:
    int binaryGap(int n) {
        bool flag=false;
        int a=1;
        vector<int> ans;
        vector<int> nums;
        while(n!=0){
            nums.push_back(n%2);
            n=n/2;
        }
        int k=nums.size();
        for(int i=0;i<k;i++){
            if(nums[i]==0){
                a++;
            }
            else if(nums[i]==1){
                
                if(flag==true){
                    
                    ans.push_back(a);
                    a=1;
                }
                flag=true;
                a=1;
            }
        }
        int h=ans.size();
        if(h==0) return 0;
        return *max_element(ans.begin(),ans.end());
    }
};