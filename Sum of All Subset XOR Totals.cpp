class Solution {
public:
    void solve(vector<int>& nums, int& ans, int s, int i)
    {
        if(i==nums.size())
        {
            ans+=s;
            return;
        }
        solve(nums, ans, s, i+1);
        solve(nums, ans, s^nums[i], i+1);
    }
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        solve(nums, ans, 0, 0);
        return ans;
    }
};
