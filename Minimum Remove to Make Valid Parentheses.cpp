class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        int open=0,close=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            open++;
            else if(s[i]==')')
            {
                if(open>close)
                {
                    close++;
                }
            }
        }
        open=min(open,close);
        close=open;
        cout<<open<<"   "<<close;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                if(open>0)
                {
                    ans+=s[i];
                    open--;
                }
            }
            else if(s[i]==')')
            {
                if(close>0)
                {
                    if(open<close)
                    {
                        ans+=s[i];
                        close--;
                    }
                }
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};
