class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        for(int i=0;i<tickets.size();i++)
        {
            if(i!=k)
            ans+=min(tickets[i],tickets[k]);
        }
        for(int i=k+1;i<tickets.size();i++)
        {
            if(tickets[i]>=tickets[k])
            ans--;
        }
        ans+=tickets[k];
        return ans;
    }
};
