class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n=s.size();
        int k=t.size();
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            sum1=sum1+s[i];
        }
        for(int i=0;i<k;i++){
            sum2=sum2+t[i];
        }
        return abs(sum2-sum1);
    }
};