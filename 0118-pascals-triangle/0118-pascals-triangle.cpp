class Solution {
public:
    
    vector<vector<int>> ans;
    
    void print_pascal(int row_num){
 
    for(int n = 1; n <= row_num; n++){
        vector<int> v;
        int val = 1;
        for(int r = 1; r <= n; r++){
            v.push_back(val);
            val = val * (n - r)/r;
        }
        ans.push_back(v);
    }
}
 
    
    vector<vector<int>> generate(int numRows) {
    
        print_pascal(numRows);
        return ans;
    }
};