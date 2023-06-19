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
    
    bool vbst(TreeNode* root,long long int minval,long long int maxval) {
        if(root==NULL) return true;
        if(root->val<=minval || root->val>=maxval) return false;
        return vbst(root->left,minval,root->val)
            && vbst(root->right,root->val,maxval);
    }
    bool isValidBST(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return true;
     //   if(root->left==NULL && root->right->val==INT_MAX && root->val==INT_MIN) return true;
   //     if(root->right==NULL && root->left->val==INT_MAX && root->val==INT_MIN) return true;
        long long int a =-10000000000;
        long long int b =10000000000;
        return vbst(root,a,b);
    }
};