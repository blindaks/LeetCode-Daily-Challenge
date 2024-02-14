class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        for(int i:nums)
        {
            if(i<0)
            neg.push_back(i);
            else
            pos.push_back(i);
        }
        vector<int>v;
        for(int i=0;i<pos.size();i++)
        {
            v.push_back(pos[i]);
            v.push_back(neg[i]);
        }
        return v;
    }
};
