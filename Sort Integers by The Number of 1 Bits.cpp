class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        sort(arr.begin(),arr.end());
        for(int i:arr)
        {
            int x=__builtin_popcount(i);
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<v.size();i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
