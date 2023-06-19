class Solution {
public:
    int splitNum(int num) {
        vector<int> dig;
        while(num!=0) {
            dig.push_back(num%10);
            num /= 10;
        }
        
        sort(dig.begin(),dig.end());
        int num1=0,num2=0;
        int n = dig.size();
        for(int i=0;i<n;i+=2) {
            num1 = num1*10 + dig[i];
        }
        for(int i=1;i<n;i+=2) {
            num2 = num2*10 + dig[i];
        }
        
        int ans = num1 + num2;
        return ans;
    }
};