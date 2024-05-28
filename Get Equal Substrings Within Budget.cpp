class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l=s.length();
        int ans=0;
        int sum=0;
        int i=0;int j=0;
        while(i<l)
        {
            sum+=abs(s[i]-t[i]);
            if(sum<=maxCost)
            ans=max(ans,i-j+1);
            else
            {
                while(sum>maxCost)
                {
                    sum=sum-abs(s[j]-t[j]);
                    j++;
                }
            }
            i++;
        }
        return ans;
    }
};
