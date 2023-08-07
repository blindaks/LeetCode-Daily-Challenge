class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=false;
        int low=0;int high=matrix.size()-1;int mid=0;int ind=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(matrix[mid][0]<=target)
            {
                ind=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        low=0;high=matrix[ind].size()-1;mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(matrix[ind][mid]==target)
            return true;
            else if(matrix[ind][mid]<target)
            low=mid+1;
            else
            high=mid-1;
        }
        return false;
    }
};
