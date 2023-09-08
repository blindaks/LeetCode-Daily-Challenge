class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        v.push_back({1});
        for(int i=2;i<=numRows;i++)
        {
            vector<int>x;
            x.push_back(1);
            for(int z=1;z<i-1;z++)
            {
                int t=v[i-2][z-1]+v[i-2][z];
                x.push_back(t);
            }
            x.push_back(1);
            v.push_back(x);
        }
        return v;
    }
};
