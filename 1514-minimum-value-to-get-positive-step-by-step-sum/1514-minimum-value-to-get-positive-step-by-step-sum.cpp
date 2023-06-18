class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int a=0;
        bool flag=true;
        while(a!=10000){
            flag=true;
            sum=a;
            for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum<1){
                flag=false;
                break;
            }
            }
            if(flag==false) a++;
            else return a==0?1:a;
        }
        return a;
    }
};