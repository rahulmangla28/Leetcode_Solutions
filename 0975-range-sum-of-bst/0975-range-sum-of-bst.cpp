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
    
    int bst(TreeNode* root, int low, int high, int &ans) {
          if(root==NULL) return 0;
        bst(root->left,low,high,ans);
        if(root->val>=low && root->val<=high) ans+=root->val;
        bst(root->right,low,high,ans);
        // if(root->val>=low && root->val<=high) ans+=root->val;
        return 0;
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        bst(root,low,high,ans);
        return ans;
    }
};