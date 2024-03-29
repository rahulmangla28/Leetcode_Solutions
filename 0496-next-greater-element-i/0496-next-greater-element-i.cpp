class Solution {
public:
                        // BRUTE APPROACH
    // vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    //     stack<int> st;
    //     vector<int> v;
    //     for(int i=0;i<nums1.size();i++){
    //         for(int j=nums2.size()-1;j>=0;j--) st.push(nums2[j]);
    //             while(v.size()!=(i+1)){
    //                 if(st.empty()) v.push_back(-1);
    //                 else if(!st.empty()&& st.top()==nums1[i]){
    //                     st.pop();
    //                     while(!st.empty()){
    //                     if(st.top()>nums1[i]){
    //                         v.push_back(st.top());
    //                         break;
    //                     }
    //                         st.pop();
    //                     }
    //                                 }
    //                 else st.pop();
    //             }
    //         while(!st.empty()) st.pop();
    //     }
    //     return v;
    // }

                    // OPTIMISED APPROACH
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};