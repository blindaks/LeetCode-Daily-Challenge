class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int m=INT_MIN;
        for(int i:nums)
        m=max(m,i);
        if(m>n)
        {
            int hash[n+1];
            for(int i=0;i<n+1;i++)
            hash[i]=0;
            for(int i:nums)
            {
                if(i<n+1 && i>=0)
                {
                    hash[i]++;
                }
            }
            for(int i=1;i<n+1;i++)
            {
                if(hash[i]==0)
                return i;
            }
        }
        else
        {
            int hash[n+1];
            for(int i=0;i<n+1;i++)
            hash[i]=0;
            for(int i:nums)
            {
                if(i>=0)
                hash[i]++;
            }
            for(int i=1;i<n+1;i++)
            {
                if(hash[i]==0)
                return i;
            }
            return n+1;
        }
        return -1;
    }
};
