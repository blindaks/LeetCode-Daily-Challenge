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
    void solve(TreeNode* root, vector<string>& v, string s)
    {
        if(root==NULL)
        return;
        s=s+(char)('a'+(root->val));
        if(root->left==NULL && root->right==NULL)
        {
            reverse(s.begin(),s.end());
            v.push_back(s);
            return;
        }
        solve(root->left, v, s);
        solve(root->right, v, s);
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string>v;
        solve(root, v, "");
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i].length()>1)
            return v[i];
        }
        return v[0];
    }
};
