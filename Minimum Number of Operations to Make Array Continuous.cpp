class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        vector<int>v;
        sort(nums.begin(),nums.end());
        v.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])
            v.push_back(nums[i]);
        }
        for(int i=0;i<v.size();i++)
        {
            int left=v[i];
            int right=left+n-1;
            int j=upper_bound(v.begin(),v.end(),right)-v.begin();
            ans=min(ans,n-j+i);
        }
        return ans;
    }
};
