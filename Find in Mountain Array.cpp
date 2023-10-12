/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        int low=0;
        int high=n-1;
        int peak=-1;int temp=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int x=mountainArr.get(mid), y=mountainArr.get(mid+1);
            if(x<y)
            {
                low=mid+1;
            }
            else if(x>y)
            {
                if(temp<x)
                {
                    peak=mid;
                    temp=x;
                }
                high=mid-1;
            }
        }
        int a=mountainArr.get(peak);
        if(a==target) return peak;
        low=0;high=peak-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int x=mountainArr.get(mid);
            if(x==target)
            return mid;
            else if(x>target)
            high=mid-1;
            else if(x<target)
            low=mid+1;
        }
        low=peak+1; high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int x=mountainArr.get(mid);
            if(x==target)
            return mid;
            else if(x<target)
            high=mid-1;
            else if(x>target)
            low=mid+1;
        }
        return -1;
    }
};
