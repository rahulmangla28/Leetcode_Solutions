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
    int countNodes(TreeNode* root) {
        if(!root) return 0;

        int leftHieght=0, rightHieght=0;

        TreeNode *left = root, *right = root;

        while(left) {
            leftHieght++;
            left = left->left;}

        while(right) {
            rightHieght++;
            right = right->right;}

        if(leftHieght == rightHieght) return pow(2,leftHieght)-1;

        return 1+countNodes(root->left)+countNodes(root->right);
    }
};