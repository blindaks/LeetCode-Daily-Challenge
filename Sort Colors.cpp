class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums)
        mp[i]++;
        int i=0;
        for(auto it:mp)
        {
            int x=it.second;
            while(x--)
            {
                nums[i]=it.first;
                i++;
            }
        }
    }
};
