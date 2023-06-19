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
    
    vector<int> ans;
    
    void Inorder(TreeNode* root) {
        if(root==nullptr) return;
        Inorder(root->left);
        ans.push_back(root->val);
        Inorder(root->right);
        return;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        Inorder(root1);
        Inorder(root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};