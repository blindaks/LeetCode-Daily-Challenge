class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums)
        mp[i]++;
        auto it=mp.begin();
        while(it!=mp.end())
        {
            if(it->second==1)
            return it->first;
            it++;
        }
        return -1;
    }
};
