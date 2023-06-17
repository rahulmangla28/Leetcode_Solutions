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
    TreeNode* constructTree(vector<int> &preOrder,int preStart,int preEnd,
                            vector<int> &inOrder,int inStart,int inEnd,
                            map<int , int> &mp) {
        if( (preStart > preEnd) || (inStart > inEnd) ) return nullptr;

        TreeNode* root = new TreeNode(preOrder[preStart]);
        int index = mp[root -> val];
        int nIndex = index - inStart;
        root->left = constructTree(preOrder, preStart + 1 , preStart + nIndex , 
                                    inOrder , inStart , index - 1 , mp);
        root->right = constructTree(preOrder, preStart + nIndex + 1 , preEnd , 
                                    inOrder , index + 1 , inEnd , mp);

        return root;
    }    

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int , int> mp;
        for(int i=0;i<inorder.size();i++) {
            mp[inorder[i]] = i;
        }
        return constructTree(preorder,0,preorder.size() - 1,inorder,0,inorder.size() - 1 ,mp);    
    }
};