class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> s;
        int l=left,r=right;
        for(int i=0;i<ranges.size();i++){
           for(int j=ranges[i][0];j<=ranges[i][1];j++){
               s.push_back(j);
           }
        }
        int n=0;
        while(left<=right){
        for(int i=0;i<s.size();i++){
            if(s[i]==left){
                n++;
                break;
            }
        }
            left++;
        }
        if(n==(r-l+1)) return true;
        else return false;
    }
};