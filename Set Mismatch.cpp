class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums)
        mp[i]++;
        int rep;int mis;
        for(auto it:mp)
        {
            if(it.second==2)
            {
                rep=it.first;
                break;
            }
        }
        int x=1;
        for(auto it:mp)
        {
            if(it.first!=x)
            {
                mis=x;
                break;
            }
            x++;
        }
        if(mis==-1) mis=nums.size();
        return {rep,mis};
    }
};
