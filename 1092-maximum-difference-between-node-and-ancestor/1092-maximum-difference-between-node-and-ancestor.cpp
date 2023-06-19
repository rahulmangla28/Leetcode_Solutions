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

    void helper(TreeNode* root,int curMax,int curMin) {
        if(root==nullptr) return;

        int possibleMax = max(abs(root->val-curMax),abs(root->val-curMin));
        maxi = max(maxi,possibleMax);

        curMax = max(curMax,root->val);
        curMin = min(curMin,root->val);

        helper(root->left,curMax,curMin);
        helper(root->right,curMax,curMin);
        return;
    }

    int maxAncestorDiff(TreeNode* root) {
        if(root==nullptr) return 0;

        helper (root,root->val,root->val);
        return maxi;
    }
};