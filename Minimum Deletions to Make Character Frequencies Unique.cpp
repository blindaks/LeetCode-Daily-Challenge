class Solution {
public:
    int minDeletions(string s) {
        int l=s.length();
        map<char,int>mp;
        for(int i=0;i<l;i++)
        mp[s[i]]++;
        int hash[l+1];
        for(int i=0;i<l+1;i++)
        hash[i]=0;
        for(auto it:mp)
        hash[it.second]++;
        long long int ans=0;
        for(int i=l;i>0;i--)
        {
            if(hash[i]>1)
            {
                ans+=(hash[i]-1);
                if(i>0)
                hash[i-1]+=hash[i]-1;
            }
        }
        return ans;
    }
};
