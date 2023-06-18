class Solution {
public:
    
    int getNext(int n) {
        int sum=0;
        while(n>0) {
            int d = n % 10;
            n = n / 10;
            sum += d * d;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        while(n!=1 && mp[n]==0) {
            mp[n]=1;
            n=getNext(n);
        }
        return n==1;
    }
};