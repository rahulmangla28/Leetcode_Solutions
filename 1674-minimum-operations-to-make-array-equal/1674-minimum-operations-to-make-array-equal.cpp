class Solution {
public:
    int minOperations(int n) {
        int cnt = 0;
        if(n%2==0) {
            n = n/2;
            for(int i=0;i<n;i++) {
                cnt += (2*i + 1);
            }
        }   
        else {
            n = n/2 + 1;
            for(int i=0;i<n;i++) {
                cnt += (2*i);
            }
        }
        return cnt;
    }
};