class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v;
        v.push_back({1});
        v.push_back({1,1});
        if(rowIndex==0 || rowIndex==1)
        return v[rowIndex];
        for(int i=2;i<=rowIndex;i++)
        {
            vector<int>x;
            x.push_back(1);
            for(int j=0;j<i-1;j++)
            {
                x.push_back(v[i-1][j]+v[i-1][j+1]);
            }
            x.push_back(1);
            v.push_back(x);
        }
        return v[rowIndex];
    }
};
