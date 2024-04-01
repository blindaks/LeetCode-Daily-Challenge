class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length();
        int i=l;
        while(i>0 && s[i-1]==' ')
        {
            i--;
        }
        l=i;
        while(i>0 && s[i-1]!=' ')
        i--;
        return l-i;
    }
};
