class Solution {
public:
    
    void solve(int n, int k, int num, vector<int> &v, vector<vector<int>> &ans)
    {
        if(k==0)
        {
            ans.push_back(v);
            return;
        }
        if(num==n+1) 
        return;
        solve(n,k,num+1,v,ans);
        v.push_back(num);
        solve(n,k-1,num+1,v,ans);
        v.pop_back();
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(n,k,1,v,ans);
        return ans;
    }
};
