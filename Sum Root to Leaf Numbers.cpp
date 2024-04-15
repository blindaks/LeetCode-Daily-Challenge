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
    void solve(TreeNode* root, int x, int& ans)
    {
        if(root->left==NULL && root->right==NULL)
        {
            x=x*10+(root->val);
            ans+=x;
            return;
        }
        if(root->left!=NULL)
        solve(root->left, x*10+(root->val), ans);
        if(root->right!=NULL)
        solve(root->right, x*10+(root->val), ans);
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        solve(root, 0, ans);
        return ans;
    }
};
