class Solution {
public:
    int minimumSum(int num) {
        vector<int> val;
        while(num!=0){
            val.push_back(num%10);
            num=num/10;
        }
        sort(val.begin(),val.end());
        vector<int> num1;
        vector<int> num2;
        int sum1=0,sum2=0;
        for(int i=0;i<val.size();i+=2)  num1.push_back(val[i]);
        for(int i=1;i<val.size();i+=2)  num2.push_back(val[i]);
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        for(int i=0;i<num1.size();i++) sum1=sum1+num1[i]*pow(10,i);
        for(int i=0;i<num2.size();i++) sum2=sum2+num2[i]*pow(10,i);
        return (sum1+sum2);
    }
};