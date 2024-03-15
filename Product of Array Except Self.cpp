class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;
        int prod=1;
        int z=0;
        for(int i:nums)
        {
            if(i==0)
            z++;
            else
            prod*=i;
        }
        if(z==nums.size())
        prod=0;
        for(int i:nums)
        {
            if(i==0)
            {
                if(z==1)
                v.push_back(prod);
                else
                v.push_back(0);
            }
            else
            {
                if(z>0)
                {
                    v.push_back(0);
                }
                else
                {
                    v.push_back(prod/i);
                }
            }
        }
        return v;
    }
};
