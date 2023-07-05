class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero=0;
        int ans=0;
        int x=0;
        
        for (int i = 0; i < nums.size(); i++) 
        {
            if(nums[i] == 0)
            zero++;
            while (zero>1)
            {
                if(nums[x]==0)
                {
                    zero--;
                }
                x++;
            }
            ans=max(ans,i-x);
        }
        return ans;
    }
};
