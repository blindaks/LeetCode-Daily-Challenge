class Solution {
public:
    int appendCharacters(string s, string t) {
        int x=0;
        for(int i=0;i<s.length() && x<t.length();i++)
        {
            if(s[i]==t[x])
            {
                x++;
            }
        }
        return t.length()-x;
    }
};
