class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>mp1,mp2;
        set<char>st1,st2;
        for(char ch:word1)
        {
            mp1[ch]++;
            st1.insert(ch);
        }
        for(char ch:word2)
        {
            mp2[ch]++;
            st2.insert(ch);
        }
        if(mp1==mp2) return true;
        map<int,int>x,y;
        for(auto it:mp1)
        x[it.second]++;
        for(auto it:mp2)
        y[it.second]++;
        if(x==y && st1==st2) return true;
        return false;
    }
};
