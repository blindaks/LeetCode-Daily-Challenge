class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x = nums[0];
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] <= x)
            {
                ans+=(x - nums[i]);
                x++;
            }
            else
            {
                x = nums[i] + 1;
            }
        }
        return ans;
    }
};
