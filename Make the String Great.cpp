class Solution {
public:
    string makeGood(string s) {
        if(s.length()<=1)
        return s;
        string ans="";
        int x=1;
        while(x>0)
        {
            x=0;int z=0;
            for(int i=0;i<s.length()-1;i++)
            {
                if(s[i]==s[i+1]+32 || s[i+1]==s[i]+32)
                {
                    if(i==s.length()-2)
                    {
                        z++;
                    }
                    i++;x++;
                    
                    continue;
                }
                else
                {
                    ans+=s[i];
                }
            }
            if(z==0)
            ans+=s[s.length()-1];
            
            cout<<ans<<endl;
            s=ans;
            if(s=="")
            return s;
            ans="";
        }
        return s;
    }
};
