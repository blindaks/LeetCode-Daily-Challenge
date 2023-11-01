class Solution {
public:

    void inorder(TreeNode* root, vector<int>& v)
    {
        if(root==NULL)
        return;

        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }

    vector<int> findMode(TreeNode* root) {
        vector<int>v;
        inorder(root, v);
        map<int,int>mp;
        for(int i:v)
        mp[i]++;
        int x=0;
        for(auto it:mp)
        {
            x=max(x,it.second);
        }
        vector<int>ans;
        for(auto it:mp)
        {
            if(it.second==x)
            ans.push_back(it.first);
        }
        return ans;
    }
};
