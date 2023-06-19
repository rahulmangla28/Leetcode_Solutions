class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
    vector<int> v(n, 0);
    int i = 1, t = 0; 
    while(v[i-1] == 0){
        v[i-1] = 1;
        t = t + k;
        i = (i + t)%n;
        if(i == 0) i = n;
    }
    vector<int> ans;
    for(int i = 0; i < v.size(); ++i){
        if(v[i] == 0) ans.push_back(i+1);
    }
    return ans;
}
};