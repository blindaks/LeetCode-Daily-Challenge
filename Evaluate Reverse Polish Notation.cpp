class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int ans=0;
        for(string s: tokens)
        {
            if(s=="+" || s=="-" || s=="*" || s=="/")
            {
                int x=(st.top());
                st.pop();
                int y=(st.top());
                st.pop();
                if(s=="+")
                st.push(x+y);
                else if(s=="-")
                st.push(y-x);
                else if(s=="*")
                st.push(y*x);
                else if(s=="/")
                st.push(y/x);
            }
            else
            st.push(stoi(s));
        }
        return st.top();
    }
};
