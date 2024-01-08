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
    return;
    v.push_back(root->val);
    preorder(root->left, v);
    preorder(root->right, v);
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>v;
        preorder(root, v);
        int ans=0;
        for(int n:v)
        {
            if(n>=low && n<=high)
            ans+=n;
        }
        return ans;
    }
};
