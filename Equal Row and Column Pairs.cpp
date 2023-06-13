class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<n;j++)
            {
                vector<int>v;
                for(int k=0;k<n;k++)
                {
                    v.push_back(grid[k][j]);
                }
                if(grid[i]==v)
                ans++;
            }
        }
        return ans;
    }
};
