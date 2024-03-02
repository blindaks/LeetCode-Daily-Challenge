class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        for(int i:nums)
        v.push_back(i*i);
        sort(v.begin(),v.end());
        return v;
    }
};
