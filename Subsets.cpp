class Solution {
public:
    void solve(vector<vector<int>>& v, vector<int>x, vector<int>nums, int i)
    {
        if(i==nums.size())
        {
            v.push_back(x);
            return;
        }
        solve(v, x, nums, i+1);
        x.push_back(nums[i]);
        solve(v, x, nums, i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>x;
        sort(nums.begin(),nums.end());
        solve(v, x, nums, 0);
        return v;
    }
};
