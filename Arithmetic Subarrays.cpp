class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        int n=nums.size();
        int m=l.size();
        for(int i=0;i<m;i++)
        {
            int x=l[i];int y=r[i];
            vector<int>v;
            for(int j=x;j<=y;j++)
            v.push_back(nums[j]);
            if(v.size()<2)
            {
                ans.push_back(false);
                break;
            }
            else
            {
                sort(v.begin(),v.end());
                if(v.size()==2)
                {
                    ans.push_back(true);
                }
                else
                {
                    int diff=v[1]-v[0];
                    int z=0;
                    for(int ind=2;ind<v.size();ind++)
                    {
                        if((v[ind]-v[ind-1])!=diff)
                        {
                            ans.push_back(false);
                            z=1;
                            break;
                        }
                    }
                    if(z==0)
                    ans.push_back(true);
                }
            }
        }
        return ans;
    }
};
