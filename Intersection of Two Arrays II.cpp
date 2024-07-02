class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        map<int,int> mp1, mp2;
        for(int num : nums1)
        mp1[num]++;
        for(int num : nums2)
        mp2[num]++;
        for(auto it : mp1)
        {
            if(mp2.find(it.first) != mp2.end())
            {
                int x = min(it.second, mp2[it.first]);
                while(x--)
                v.push_back(it.first);
            }
        }
        return v;
    }
};
