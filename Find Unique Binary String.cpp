class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(auto s:nums)
        {
            int x=0;
            int p=0;
            for(int i=n-1;i>=0;i--)
            {
                if(s[i]=='1')
                x+=(pow(2,p));
                p++;
            }
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int m=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=m)
            {
                break;
            }
            m++;
        }
        string s="";
        while(m!=0)
        {
            if(m%2)
            {
                s="1"+s;
            }
            else
            {
                s="0"+s;
            }
            m/=2;
        }
        while(s.length()<n)
        {
            s="0"+s;
        }
        return s;
    }
};
