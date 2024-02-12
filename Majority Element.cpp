class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums)
        mp[i]++;
        for(auto it:mp)
        {
            if(it.second>nums.size()/2)
            return it.first;
        }
        return 0;
    }
};
