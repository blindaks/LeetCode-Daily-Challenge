class Solution {
public:
    int minimumLength(string s) {
        int l=s.length();
        int i=0;int j=l-1;
        if(l==1)
        return 1;
        while(i<j && s[i]==s[j])
        {
            while(i+1<j && s[i+1]==s[i])
            {
                i++;
            }
            if(i==j) return 0;
            while(j-1>i && s[j-1]==s[j])
            {
                j--;
            } 
            if(i==j)
            return 0;
            i++;
            j--;
        }
        if(i>j) return 0;
        return j-i+1;
    }
};
