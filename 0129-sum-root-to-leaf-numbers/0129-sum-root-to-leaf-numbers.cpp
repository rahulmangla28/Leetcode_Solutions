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
    
    int sumR(TreeNode* root, int x) {
        if (root == nullptr) return 0;
        if ( root->right == nullptr && root->left == nullptr) 
            return 10 * x + root->val;
        return sumR(root->left,10 * x + root->val) + sumR(root->right,10 * x + root->val) ; 
    }
    
    
    int sumNumbers(TreeNode* root) {
        return sumR(root, 0);
    }
    
    
};