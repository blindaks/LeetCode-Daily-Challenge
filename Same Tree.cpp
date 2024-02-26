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
    void preorder(TreeNode* root, vector<int>& v)
    {
        if(root==NULL)
        {
            v.push_back(100000);
            return;
        }
        v.push_back(root->val);
        preorder(root->left, v);
        preorder(root->right, v);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>v1,v2;
        preorder(p, v1);
        preorder(q, v2);
        return v1==v2;
    }
};
