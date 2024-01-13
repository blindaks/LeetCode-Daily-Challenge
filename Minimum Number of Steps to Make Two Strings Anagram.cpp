class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        map<char,int>mp1,mp2;
        for(char ch:s)
        mp1[ch]++;
        for(char ch:t)
        mp2[ch]++;
        for(auto it:mp1)
        {
            if(mp2.find(it.first)==mp2.end())
            ans+=it.second;
            else if(mp2[it.first]<it.second)
            ans+=it.second-mp2[it.first];
        }
        return ans;
    }
};
