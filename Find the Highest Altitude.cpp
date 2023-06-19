class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v;
        int n=gain.size();
        v.push_back(0);
        for(int i=0;i<n;i++)
        {
            v.push_back(gain[i]+v[v.size()-1]);
        }
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};
