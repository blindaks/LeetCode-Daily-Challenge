#include<bits/stdc++.h>
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(int x:nums)
            mp[x]++;
        int ans=0;
        for(auto it:mp)
            ans=max(ans,it.second);
        int z=0;
        for(auto it:mp)
        {
            if(it.second==ans)
                z+=ans;
        }
        return z;
    }
};
