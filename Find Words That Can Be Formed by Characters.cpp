class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        map<char,int>mp;
        for(char c:chars)
        mp[c]++;
        for(string s:words)
        {
            map<char,int>mp1;
            for(char ch:s)
            mp1[ch]++;
            int f=0;
            for(char ch:s)
            {
                if(mp1[ch]>mp[ch])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            ans+=s.length();
        }
        return ans;
    }
};
