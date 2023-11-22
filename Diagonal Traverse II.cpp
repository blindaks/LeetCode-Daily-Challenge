class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n=nums.size();
        map<int,vector<int>>mp;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                int sum=i+j;
                mp[sum].push_back(nums[i][j]);
            }
        }
        vector<int>ans;
        int curr=0;
        while(mp.find(curr)!=mp.end())
        {
            for(int num: mp[curr])
            {
                ans.push_back(num);
            }
            curr++;
        }
        return ans;
    }
};
