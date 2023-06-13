class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>v;
        int n=nums.size();
        string x="";
            string y="";
            if(n==0)
            return v;
            if(n==1)
            {
                v.push_back(to_string(nums[0]));
                return v;
            }
        for(int i=0;i<n-1;i++)
        {
            
            if(nums[i]!=nums[i+1]-1)
            {
                y=to_string(nums[i]);
                if(x=="")
                {
                    v.push_back(y);
                    y="";
                }
                else
                {
                    v.push_back(x+"->"+y);
                    x="";y="";
                }
            }
            else
            {
                if(x=="")
                x=to_string(nums[i]);
            }
        }
        if(x=="")
        v.push_back(to_string(nums[n-1]));
        else
        v.push_back(x+"->"+to_string(nums[n-1]));
        return v;
    }
};
