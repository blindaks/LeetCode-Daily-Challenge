class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        vector<pair<float,vector<int>>>v;
        for(int i=0;i<n-1;i++)
        {
            for(int j=n-1;j>i;j--)
            {
                v.push_back({(float)arr[i]/(float)arr[j],{arr[i],arr[j]}});
            }
        }
        sort(v.begin(),v.end());
        return v[k-1].second;
    }
};
