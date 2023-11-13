class Solution {
public:
    string sortVowels(string s) {
        int l=s.length();
        vector<char>v;
        string t="";
        for(int i=0;i<l;i++)
        {
            char c=s[i];
            if((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')|| ((c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')))
            {
                v.push_back(s[i]);
            }
        }
        sort(v.begin(),v.end());
        int x=0;
        for(int i=0;i<l;i++)
        {
            char c=s[i];
            if((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')|| ((c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')))
            {
                t+=v[x];
                x++;
            }
            else
            {
                t+=s[i];
            }
        }
        return t;
    }
};
