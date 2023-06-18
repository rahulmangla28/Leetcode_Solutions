class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> ans;
        vector<char> nums;
        int n=s.size();
        int k=t.size();
        for(int i=0;i<n;i++){
            if(s[i]!='#') ans.push_back(s[i]);
            else {
                if(ans.size()!=0) ans.pop_back();
            }
        }
        for(int i=0;i<k;i++){
            if(t[i]!='#') nums.push_back(t[i]);
            else {
                if(nums.size()!=0) nums.pop_back();
            }
        }
        int z=nums.size();
        int p=ans.size();
        if(p!=z) return false;
        for(int i=0;i<p;i++){
            if(ans[i]!=nums[i]) return false;
        }
        return true;
    }
};

                    //SEE TWO POINTER APPROACH FROM SOLUTION