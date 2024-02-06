class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>>mp;
        vector<string>v=strs;
        for(int i=0;i<v.size();i++)
        {
            sort(v[i].begin(),v[i].end());
            mp[v[i]].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto it:mp)
        {
            vector<string>vec;
            for(int i:it.second)
            {
                vec.push_back(strs[i]);
            }
            ans.push_back(vec);
        }
        return ans;
    }
};
