class Solution {
public:
    void solve(vector<string>&v, string s, int i, int n, vector<string> arr)
    {
        set<char>st;
        for(char ch:s)
        st.insert(ch);
        if(st.size()!=s.length())
        return;
        if(i==n)
        {
            v.push_back(s);
            return;
        }
        solve(v, s, i+1, n, arr);
        solve(v, s+arr[i], i+1, n, arr);
    }
    int maxLength(vector<string>& arr) {
        int i=0;
        int n=arr.size();
        vector<string>v;
        string s="";
        solve(v, s, i, n, arr);
        int ans=0;
        s="";
        for(int i=0;i<v.size();i++)
        {
            s=v[i];
            map<char,int>mp;
            int x=0;
            for(char ch:s)
            {
                mp[ch]++;
                if(mp[ch]>1)
                {
                    x=1;
                    break;
                }
            }
            if(x==0)
            {
                if(s.length()>ans)
                ans=s.length();
            }
        }
        return ans;
    }
};
