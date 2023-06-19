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
    int deepestLeavesSum(TreeNode* root) {
        vector<int> v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int sum=0;
            int n=q.size();
            for(int i=0;i<n;i++) {
                auto a=q.front();
                q.pop();
                sum+=a->val;
                if(a->left) q.push(a->left);
                if(a->right) q.push(a->right);
            }
            v.push_back(sum);
        }
        return v[v.size()-1];
    }
};