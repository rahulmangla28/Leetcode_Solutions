class Solution {
public:
    vector<int> partitionLabels(string s) {
       vector<int> v;
        int left=0,right=0;
        int n=s.size();
        int map[26];
        for(int i=0;i<n;i++){
            map[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            right=max(right,map[s[i]-'a']);
            if(i==right){
                v.push_back(i-left+1);
                left=i+1;
            }
        }
        return v;
    }
};