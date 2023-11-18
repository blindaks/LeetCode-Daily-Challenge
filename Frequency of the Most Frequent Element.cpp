class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int ans=1,s=0,e=0;
        long long int sum=0;
        sort(nums.begin(),nums.end());
        while(e<nums.size())
        {
            sum+=nums[e];
            e++;
            if((long long int)(k+sum)<((long long int)nums[e-1]*(e-s)))
            {
                sum-=nums[s];
                s++;
            }
            ans=max(ans,(e-s));
        }
        return ans;
    }
};
