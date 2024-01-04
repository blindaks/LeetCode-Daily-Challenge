class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        for(int x:nums)
        mp[x]++;
        int ans=0;
        for(auto it:mp)
        {
            int x=it.second;
            if(x==1)
            return -1;
            if(x%3==0)
            ans+=x/3;
            else
            {
                if(x%3==1)
                {
                    ans+=x/3-1;
                    ans+=2;
                }
                else
                {
                    ans+=x/3;
                    ans++;
                }
            }
        }
        return ans;
    }
};
