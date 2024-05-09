class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        int x=0;
        long long int ans=0;
        for(int i=0;i<happiness.size() && k>0;i++)
        {
            if(happiness[i]-x<=0)
            return ans;
            else
            {
                ans+=happiness[i]-x;
                x++;
            }
            k--;
        }
        return ans;
    }
};
