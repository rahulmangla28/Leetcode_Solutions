class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>> nums;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int a=arr[i];
            int l=0;
            while(a!=0){
                if((a%2)==1) l++;
                a=a/2;
            }
           // nums.insert(pair<int,int>(l,arr[i]));
            nums[l].push_back(arr[i]);
        }
        vector<int> ans;
        for(auto it=nums.begin();it!=nums.end();it++){
            for (auto t:it->second)
            ans.push_back(t);
        }
        return ans;
    }
};