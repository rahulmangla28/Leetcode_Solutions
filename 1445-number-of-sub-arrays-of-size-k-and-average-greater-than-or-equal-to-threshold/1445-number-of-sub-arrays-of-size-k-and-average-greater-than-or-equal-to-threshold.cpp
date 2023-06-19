class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt=0;
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum=sum+arr[i];
        }
        if((sum/k)>=threshold)  cnt++;
        for(int i=0;i<n-k;i++){
            sum=sum-arr[i]+arr[k+i];
            if((sum/k)>=threshold) cnt++; 
        }
        return cnt++;
    }
};