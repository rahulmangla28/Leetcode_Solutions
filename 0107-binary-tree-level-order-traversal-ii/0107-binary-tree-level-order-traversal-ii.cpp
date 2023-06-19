/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
     
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    queue<TreeNode*> st;
    st.push(root);
        while(!st.empty()) {
          vector<int> v;
            int n=st.size();
            for(int i=0;i<n;i++) {
                TreeNode* a=st.front();
                st.pop();       
                if(a->left!=NULL) st.push(a->left);
                if(a->right!=NULL) st.push(a->right);
              v.push_back(a->val);
            }
            ans.push_back(v);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};