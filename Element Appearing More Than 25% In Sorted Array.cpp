class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int p=n/4;
        sort(arr.begin(),arr.end());
        int c=1;
        if(c>p)
        return arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                c++;
                if(c>p)
                return arr[i];
            }
            else
            {
                c=1;
            }
        }
        return -1;
    }
};
