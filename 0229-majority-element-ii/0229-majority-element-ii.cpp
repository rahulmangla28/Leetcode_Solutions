class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int res1=-1,res2=-1,cnt1=0,cnt2=0;
        for(auto num : nums) {
            if(num==res1) cnt1++;
            else if(num == res2) cnt2++;
            else if(cnt1==0) {
                cnt1 = 1;
                res1 = num;
            }
            else if(cnt2==0) {
                cnt2 = 1;
                res2 = num;
            }    
            else {
                cnt1--;
                cnt2--;
            }
        }    

        cnt1=0,cnt2=0;
        for(auto num : nums) {
            if(num == res1) cnt1++;
            else if(num == res2) cnt2++;
        }

        vector<int> res;
        if(cnt1>n/3) res.push_back(res1);
        if(cnt2>n/3) res.push_back(res2);

        return res;
    }
};