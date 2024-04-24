class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
        return 0;
        if(n==1 || n==2)
        return 1;
        vector<int>v;
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        for(int i=3;i<=n;i++)
        {
            v.push_back(v[i-1]+v[i-2]+v[i-3]);
        }
        return v[n];
    }
};
