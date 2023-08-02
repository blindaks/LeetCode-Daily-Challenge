class Solution {
public:
    void solve(vector<vector<int>>& v, vector<int>nums, int ind)
    {
        if(ind==nums.size())
        {
            v.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[i],nums[ind]);
            solve(v, nums, ind+1);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        solve(v, nums, 0);
        return v;
    }
};
