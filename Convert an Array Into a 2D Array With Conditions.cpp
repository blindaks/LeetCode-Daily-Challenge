class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        vector<vector<int>>v;
        int x=INT_MIN;
        for(auto it:mp)
        {
            x=max(x,it.second);
        }
        for(int i=0;i<x;i++)
        {
            vector<int>vec;
            for(auto it:mp)
            {
                if(it.second!=0)
                {
                    vec.push_back(it.first);
                    mp[it.first]--;
                }
            }
            v.push_back(vec);
        }
        return v;
    }
};
