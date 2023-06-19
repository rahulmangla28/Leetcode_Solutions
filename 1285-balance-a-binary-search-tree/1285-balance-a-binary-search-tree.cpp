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
    vector<TreeNode*> arr;
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return arrtoBST(0,arr.size()-1);
    }
    void inorder(TreeNode* root) {
        if(root==nullptr) return;
        inorder(root->left);
        arr.push_back(root);
        inorder(root->right);
    }

    TreeNode* arrtoBST(int l,int r) {
        if(l>r) return nullptr;
        int mid = (l + r) / 2;
        TreeNode* root = arr[mid];
        root->left = arrtoBST(l, mid - 1);
        root->right = arrtoBST(mid + 1, r);
        return root;
    }
};