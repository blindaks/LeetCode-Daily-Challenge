class Solution {
public:
    bool halvesAreAlike(string s) {
        int x=0;
        for(int i=0;i<s.length()/2;i++)
        {
            char ch=s[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            x++;
        }
        int y=0;
        for(int i=s.length()/2;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            y++;
        }
        return x==y;
    }
};
