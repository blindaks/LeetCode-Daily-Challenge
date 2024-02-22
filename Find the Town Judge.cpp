class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int>mp;
        for(auto v:trust)
        {
            mp[v[0]]++;
        }
        int x=0;
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==0)
            {
                x=i;
                break;
            }
        }
        map<int,int>m;
        int c=0;
        for(auto v:trust)
        {
            if(v[1]==x)
            c++;
        }
        if(c==n-1)
        return x;
        return -1;
    }
};
