class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        int ans=-1;
        int low=0,high=nums.size()-1,mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]>target)
            high=mid-1;
            else
            low=mid+1;
        }
        v.push_back(ans);
        ans=-1;
        mid=0;low=0;high=nums.size()-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]>target)
            high=mid-1;
            else
            low=mid+1;
        }
        v.push_back(ans);
        return v;
    }
};
