class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int n=nums1.size();
        int m=nums2.size();
        set<int>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                s.insert(nums1[i]);
            }
        }
        for(auto it=s.begin();it!=s.end();++it)
        {
            v.push_back(*it);
        }
        return v;
    }
};
