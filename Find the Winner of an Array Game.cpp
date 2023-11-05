class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int i=0;int j=1;
        int n=arr.size();
        map<int,int>mp;
        while(i<n && j<n)
        {
            if(arr[i]>arr[j])
            {
                mp[arr[i]]++;
                j++;
                if(j==n)
                j=0;
                if(mp[arr[i]]==k || mp[arr[i]]==n-1)
                return arr[i];
            }
            else
            {
                mp[arr[j]]++;
                if(mp[arr[j]]==k || mp[arr[i]]==n-1)
                return arr[j];
                i=j;
                j++;
                if(j==n)
                j=0;
            }
        }
        return -1;
    }
};
