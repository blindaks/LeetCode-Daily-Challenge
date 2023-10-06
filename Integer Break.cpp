class Solution {
public:
    int integerBreak(int n) {
        vector<int>v;
        if(n==2) return 1;
        if(n==3) return 2;
        int ans=1;
        int x=n/3;
        while(x--)
        v.push_back(3);
        if(n%3==1)
        v[0]=4;
        else if(n%3==2)
        {
            v.push_back(2);
        }
        for(int i:v)
        ans*=i;
        return ans;
    }
};
