class Solution {
 public:
    string toHex(int num){
        string s="";
        unsigned int n = (unsigned int)num;
        cout<<n;
        while(n > 0){
            int r = n % 16;
            if(r < 10)s += to_string(r);
            else s += (r - 10 + 'a');
            n /= 16;
        }
        
        reverse(s.begin(), s.end());
        
        return (s != "")?s:"0";
    }
//     char fun(int x){
//         if(x<10) return (char) ('0'+x);
//         else return (char) ('a'+(x-10));
//     }
//     string toHex(int num) {
//         if(num==0) return "0";
//         int n=num;
//         string nums;
//         if(n>0){
//         while(n!=0){
//             nums.push_back(fun(n%16));
//             n=n/16;
//         }
//         reverse(nums.begin(),nums.end());
//         return nums;
//         }
//         if(n<0){
//             vector<int> nums1;
//             string ans;
//             string b;
//             int a=abs(n);
//             while(a!=0){
//                 nums1.push_back(a%2);
//                 a=a/2;
//             }
//             reverse(nums1.begin(),nums1.end());
//             int k=nums1.size();
//             ans[0]=1;
//             for(int i=1;i<32-k;i++){
//                 ans[i]=1;
//             }
//             for(int i=0;i<k;i++){
//                 ans.push_back(nums1[i]);
//             }
//                 while(a!=0){
//                     b.push_back(a%16);
//                     a=a/16;
//                 }
//             reverse(b.begin(),b.end());
//             return b;
//             }
        
//     return "";
//     }
};