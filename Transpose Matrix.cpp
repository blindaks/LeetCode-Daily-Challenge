class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>v;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            vector<int>vec(n,0);
            v.push_back(vec);
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                v[i][j]=matrix[j][i];
            }
        }
        return v;
    }
};
