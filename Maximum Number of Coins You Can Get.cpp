class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans=0;
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int x=n/3;
        for(int i=n-2;i>=0;i-=2)
        {
            if(x==0)
            break;
            ans+=piles[i];
            x--;
        }
        return ans;
    }
};
