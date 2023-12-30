class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int>mp;
        int n=words.size();
        if(n==1)
        return true;
        for(int i=0;i<n;i++)
        {
            int l=words[i].size();
            for(int j=0;j<l;j++)
            {
                mp[words[i][j]]++;
            }
        }
        for(auto it:mp)
        {
            if(it.second%n!=0)
            return false;
        }
        return true;
    }
};
