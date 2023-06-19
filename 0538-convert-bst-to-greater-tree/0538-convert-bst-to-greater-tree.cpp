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

    int maxi = 0;

    void postOrder(TreeNode* root) {
        if(root==nullptr) return;

        postOrder(root->right);
        root->val = root->val + maxi;
        maxi = root->val;
        postOrder(root->left);

        return;
    }

    TreeNode* convertBST(TreeNode* root) {
        if(!root) return root;
        postOrder(root);
        return root;
    }
};