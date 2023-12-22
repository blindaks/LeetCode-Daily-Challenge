class Solution {
public:
    int maxScore(string s) {
        int a=0,b=0;
        int l=s.length();
        int ans=INT_MIN;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='0')
            a++;
            else
            b++;
        }
        int x=0;int y=b;
        for(int i=0;i<l-1;i++)
        {
            if(s[i]=='0')
            {
                x++;
            }
            else
            {
                y--;
            }
            ans=max(ans,x+y);
        }
        return ans;
    }
};
