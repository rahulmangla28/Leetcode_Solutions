class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int cnt=0;
        for(int i=0;i<n;i++) {
            int age = (details[i][11] - '0')*10 + (details[i][12] - '0');
           // cout<<age<<" ";
            if(age>60) cnt++;
        }
        return cnt;
        
    }
};