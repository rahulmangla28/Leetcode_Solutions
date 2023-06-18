class Solution {
public:
    int bitwiseComplement(int n) {
      vector<int> a;
    if(n==0) return 1;
        while(n!=0){
            a.push_back(n%2);
            n=n/2;
        }
        int k=a.size();
        int sum=0;
        for(int i=0;i<k;i++){
            a[i]=a[i]^1;
            sum=sum+a[i]*pow(2,i);
        }
        return sum;  
    }
};