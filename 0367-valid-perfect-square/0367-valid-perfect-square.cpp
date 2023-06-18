class Solution {
public:
bool isPerfectSquare(int num){  
         long long int low=1,high=pow(2,31)-1;
              while(low<=high){
  long long int mid=low+(high-low)/2;
                  if(mid*mid==num)
                      return true;
                  if(mid*mid<num)
                      low=mid+1;
                  else
                      high=mid-1;
              }
     return false;
     }
};