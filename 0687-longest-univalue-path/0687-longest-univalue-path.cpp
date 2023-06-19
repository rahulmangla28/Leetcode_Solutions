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
    int len = 0;
    int helper(TreeNode* node) {
        if(node==nullptr) return 0;
        int left = helper(node->left);
        int right = helper(node->right);

        int arrowLeft=0;int arrowRight=0;
        if(node->left!=nullptr && node->left->val==node->val) arrowLeft += left + 1;
        if(node->right!=nullptr && node->right->val==node->val) arrowRight += right + 1;

        len = max(len,arrowLeft + arrowRight);
        return max(arrowLeft,arrowRight);

    }
    int longestUnivaluePath(TreeNode* root) {
        if(!root) return 0;
        helper(root);
        return len;
    }
};