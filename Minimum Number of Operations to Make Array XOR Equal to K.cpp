class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x=0;
        for(int i:nums)
        {
            x=x^i;
        }
        if(x==k)
        return 0;
        int ans=0;
        string s="",t="";
        while(x!=0)
        {
            if(x%2)
            {
                s="1"+s;
            }
            else
            {
                s="0"+s;
            }
            x/=2;
        }
        while(k!=0)
        {
            if(k%2)
            {
                t="1"+t;
            }
            else
            {
                t="0"+t;
            }
            k/=2;
        }
        if(s.length()!=t.length())
        {
            if(s.length()<t.length())
            {
                int z=t.length()-s.length();
                while(z--)
                {
                    s="0"+s;
                }
            }
            else
            {
                int z=s.length()-t.length();
                while(z--)
                {
                    t="0"+t;
                }
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=t[i])
            ans++;
        }
        return ans;
    }
};
