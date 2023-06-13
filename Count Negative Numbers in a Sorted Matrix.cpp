class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            int count=grid[i].size();
            int low=0;int high=grid[i].size()-1;int mid=0;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                if(grid[i][mid]<0)
                {
                    count=mid;
                    high=mid-1;
                }
                else
                low=mid+1;
            }
            ans+=grid[i].size()-count;
        }
        return ans;
    }
};
