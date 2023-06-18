class Solution {
public:
    int findComplement(int num) {
        vector<int> a;
        while(num!=0){
            a.push_back(num%2);
            num=num/2;
        }
        int n=a.size();
        int sum=0;
        for(int i=0;i<n;i++){
            a[i]=a[i]^1;
            sum=sum+a[i]*pow(2,i);
        }
        return sum;
    }
};