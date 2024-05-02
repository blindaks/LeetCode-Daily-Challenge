class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(int i:nums)
        mp[i]++;
        for(int i:nums)
        {
            if(mp[(i*-1)]!=0)
            return (i*-1);
        }
        return -1;
    }
};
