class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,vector<int>>>pq;
        vector<vector<int>>v;
        
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                int x=nums1[i]+nums2[j];
                vector<int>temp;
                temp.push_back(nums1[i]);temp.push_back(nums2[j]);
                if(pq.size()<k)
                pq.push(make_pair(x,temp));
                else if(x<pq.top().first)
                {
                    pq.pop();
                    pq.push(make_pair(x,temp));
                }
                else
                break;
                
            }
            
        }
        while(k--)
        {
            if(!pq.empty())
            {
                int x=pq.top().second[0];
                int y=pq.top().second[1];
                pq.pop();
                v.push_back({x,y});
            }
        }
        return v;
    }
};
