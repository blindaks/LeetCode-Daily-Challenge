class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>v;
        int n=nums.size();
        priority_queue<pair<int,int>>pq;
        int x=0;
        for(int i=0;i<n;i++)
        {
            pq.push({nums[i],i});
            if(pq.size()>=k)
            {
                while(pq.top().second<x)
                pq.pop();
                v.push_back(pq.top().first);
                x++;
            }
        }
        return v;
    }
};
