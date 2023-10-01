class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        int l=s.length();
        int x=0,y=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]==' ')
            {
                string t=s.substr(y,x);
                reverse(t.begin(),t.end());
                st.push(t);
                x=0;
                y=i+1;
            }
            else
            {
                x++;
            }
        }
        string t=s.substr(l-x);
        reverse(t.begin(),t.end());
        st.push(t);
        string ans="";
        ans=st.top();
        st.pop();
        while(!st.empty())
        {
            ans=st.top()+" "+ans;
            st.pop();
        }
        return ans;
    }
};
