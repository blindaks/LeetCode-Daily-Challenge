class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int prod=1;
        if(k<=1)
        return 0;
        int i=0;int j=0;
        while(j<n)
        {
            prod*=nums[j];
            while(prod>=k)
            {
                prod/=nums[i];
                i++;
            }
            ans+=j-i;
            ans++;
            j++;
        }
        return ans;
    }
};
