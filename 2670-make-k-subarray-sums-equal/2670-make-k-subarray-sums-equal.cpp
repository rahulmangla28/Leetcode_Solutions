class Solution {
public:
    
    // The sum of all subarrays of size k is equal if:
        //arr[i] == arr[i + k]
        //arr[i] == arr[i + 2 * k]
        //and so on.
        
    
    long long makeSubKSumEqual(vector<int>& arr, int k) {
        
        long long res = 0;
        
        int n = arr.size();
        
        k = __gcd(k , n);
        for(int i=0;i<k;i++) {
            vector<int> vec;
            
            for(int j = i;j<n;j+=k) {
                vec.push_back(arr[j]);
            }
            
            sort(vec.begin() , vec.end());
            
            long long midv = vec[vec.size()/2];
            
            for(int j=i;j<n;j+=k) {
                res += abs(midv - arr[j]);
            }
        }
        
        
        return res;
    }
};