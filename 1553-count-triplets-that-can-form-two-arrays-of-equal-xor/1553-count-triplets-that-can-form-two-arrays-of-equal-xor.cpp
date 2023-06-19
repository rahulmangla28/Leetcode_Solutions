// class Solution {
// public:
//     int countTriplets(vector<int>& arr) {
//         int n=arr.size();
//         int cnt=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 for(int k=0;k<n;k++){
//                     int a=0,b=0;
//                     while(i<j){
//                         a=a^arr[i];
//                         i++;
//                     }
//                     while(j<=k){
//                         b=b^arr[j];
//                         j++;
//                     }
//                     if(a==b) cnt++;
//                 }
//             }
//         }
//         return cnt;
//     }
// };

//                          SOLUTION
// We have to find triplets i, j, k such that arr[i]^..arr[j].. ^arr[k] = 0 where i< j <= k
// As i < j always and j<=k so min triplet array length can be 2. So we just start from index i
// and keep doing XOR to the next element and check if XOR result is 0. Now if the length 
// of the array is L then the number of triplet will be L-1 as j<=k.
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        
        int n = arr.size();
        if(n==1) return 0;  // base case
        
        int lxor = 0;
        int c = 0;  // triplet count
        
        // loop through index i to last and check the XOR sum == 0 
        for(int i=0;i<n-1;i++)
        {
            lxor = arr[i];
            for(int j=i+1;j<n;j++)  // minimum array size can be 2
            {
                lxor^=arr[j];
                if(lxor==0)c+=(j-i);    // possible triplet from array length is L-1
            }
        }
        
        return c;
    }
};