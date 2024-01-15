class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp1,mp2;
        for(auto v:matches)
        {
            mp1[v[0]]++;
            mp2[v[1]]++;
        }
        vector<int>a,b;
        for(auto it:mp1)
        {
            if(mp2.find(it.first)==mp2.end())
            {
                a.push_back(it.first);
            }
        }
        for(auto it:mp2)
        {
            if(it.second==1)
            {
                b.push_back(it.first);
            }
        }
        return {a,b};
    }
};
