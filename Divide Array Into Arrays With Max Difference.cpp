class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int i=0;int j=2;
        while(j<nums.size())
        {
            if(nums[j]-nums[i]>k)
            return ans;
            i+=3;
            j+=3;
        }
        int c=0;vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(nums[i]);
            c++;
            if(c==3)
            {
                ans.push_back(v);
                v.clear();
                c=0;
            }
        }
        return ans;
    }
};
