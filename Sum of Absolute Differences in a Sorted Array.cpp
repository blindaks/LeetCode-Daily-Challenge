class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        int right[n];
        int left[n];
        for(int i=0;i<n;i++)
        {
            if(i==0)
            right[i]=(nums[i]);
            else
            right[i]=(nums[i]+right[i-1]);
        }
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            left[i]=(nums[i]);
            else
            left[i]=(nums[i]+left[i+1]);
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int x=abs(((i+1)*nums[i])-(right[i]));
            int y=abs(((n-i)*nums[i])-left[i]);
            ans.push_back(x+y);
        }
        return ans;
    }
};
