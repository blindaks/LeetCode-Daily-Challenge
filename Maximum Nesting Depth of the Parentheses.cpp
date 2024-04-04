class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int x=0;
        for(char c:s)
        {
            if(c=='(')
            x++;
            else if(c==')')
            {
                ans=max(ans,x);
                x--;
            }
        }
        return ans;
    }
};
