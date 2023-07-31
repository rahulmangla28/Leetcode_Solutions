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
    void dfs(TreeNode* node,vector<int> &tmp) {
        if(!node->left && !node->right) tmp.push_back(node->val);

        if(node->left) dfs(node->left,tmp);
        if(node->right) dfs(node->right,tmp); 

        return;
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1; dfs(root1,arr1);
        vector<int> arr2; dfs(root2,arr2);
        
        // for(int i=0;i<arr1.size();i++) cout<<arr1[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<arr2.size();i++) cout<<arr2[i]<<" ";
        // cout<<endl;

        return (arr1 == arr2) ;
    }
};