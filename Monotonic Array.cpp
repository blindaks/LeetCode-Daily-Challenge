class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int x=0;
        int n=nums.size();
        if(n==1 || n==2)
        return true;
        else
        {
            for(int i=1;i<n;i++)
            {
                if(nums[i-1]<nums[i])
                {
                    if(x==2)
                    return false;
                    else
                    x=1;
                }
                else if(nums[i-1]>nums[i])
                {
                    if(x==1)
                    return false;
                    else
                    x=2;
                }
                
            }
            return true;
        }
        return true;
    }
};
