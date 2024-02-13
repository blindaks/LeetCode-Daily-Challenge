class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s:words)
        {
            int l=s.length();
            int f=0;
            for(int i=0;i<l/2;i++)
            {
                if(s[i]!=s[l-1-i])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            return s;
        }
        return "";
    }
};
