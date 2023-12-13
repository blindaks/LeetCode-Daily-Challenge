class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        int n=mat.size();
        int m=mat[0].size();
        vector<int>row(n,0);
        vector<int>col(m,0);
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                c++;
            }
            row[i]=c;
        }
        for(int j=0;j<m;j++)
        {
            int c=0;
            for(int i=0;i<n;i++)
            {
                if(mat[i][j]==1)
                c++;
            }
            col[j]=c;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1 && row[i]==1 && col[j]==1)
                ans++;
            }
        }
        return ans;
    }
};
