class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int i=0; int j=n-1;
        while(i<j)
        {
            while(i<n && nums[i]%2==0)
            i++;
            while(j>=0 && nums[j]%2==1)
            j--;
            if(i<j)
            {
                swap(nums[i],nums[j]);
                i++;j--;
            }
        }
        return nums;
    }
};
