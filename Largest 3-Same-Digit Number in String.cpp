class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int n=num.length();
        int c=1;
        for(int i=1;i<n;i++)
        {
            if(num[i]==num[i-1])
            {
                c++;
                if(c==3)
                {
                    string str="";
                    str+=num[i];
                    str+=num[i];
                    str+=num[i];
                    if(ans.length()==0)
                    ans=str;
                    else
                    ans=max(ans,str);
                }
            }
            else
            {
                c=1;
            }
        }
        return ans;
    }
};
