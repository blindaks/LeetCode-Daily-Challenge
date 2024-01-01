class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int x=g.size();
        int y=s.size();
        int i=0,j=0;
        while(i<x && j<y)
        {
            if(s[j]>=g[i])
            {
                j++;
                i++;
                ans++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};
