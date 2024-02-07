class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(char ch:s)
        mp[ch]++;
        string str="";
        vector<pair<int,char>>v;
        for(auto it:mp)
        v.push_back({it.second,it.first});
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--)
        {
            char ch=v[i].second;
            int x=v[i].first;
            while(x--)
            str+=ch;
        }
        return str;
    }
};
