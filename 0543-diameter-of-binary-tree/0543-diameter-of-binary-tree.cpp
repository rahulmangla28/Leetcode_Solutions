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
private: 
    int helper(TreeNode* root) {
        if(!root) return 0;

        // recursive call to calculate height of left subtree
        int leftHeight = helper(root->left);

        // recursive call to calculate height of right subtree
        int rightHeight = helper(root->right);

        // stores maximum height
        maxi = max (maxi,leftHeight+rightHeight);

        // return height
        return 1 + max(leftHeight,rightHeight);
    }

public:
    int maxi = -1;
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);   
        return maxi; 
    }
};