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
    int solve(TreeNode* node, int& ans)
    {
        if(node==NULL)
        return 0;
        int left=solve(node->left, ans);
        int right=solve(node->right, ans);
        ans+=abs(left)+abs(right);
        return node->val+left+right-1;
    }
    int distributeCoins(TreeNode* root) {
        int ans=0;
        solve(root, ans);
        return ans;
    }
};
