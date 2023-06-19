class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int k=1;
        vector<int> freq;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                k++;
                continue;
            }
            freq.push_back(k);
            k=1;
        }
         freq.push_back(k);
        sort(freq.begin(),freq.end(),greater<int>());
        int l=0;
        int t=freq.size();
        int sum=0;
        for(int i=0;i<t;i++){
            sum=sum+freq[i];
            l++;
            if(sum>=n/2) return l;
        }
        return 0;
    }
};