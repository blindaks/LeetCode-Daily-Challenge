class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,string>mp;
        vector<int>v;
        for(int i:score)
        v.push_back(i);
        sort(v.begin(),v.end(),greater<int>());
        int x=4;
        for(int i=0;i<v.size();i++)
        {
            if(i==0)
            mp[v[i]]="Gold Medal";
            if(i==1)
            mp[v[i]]="Silver Medal";
            if(i==2)
            mp[v[i]]="Bronze Medal";
            else if(i>=3)
            {
                mp[v[i]]=to_string(x);
                x++;
            }
        }
        vector<string>ans;
        for(int i:score)
        {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};
