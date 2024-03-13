class Solution {
public:
    int pivotInteger(int n) {
        int a[n+1];
        int b[n+1];
        a[0]=0;
        b[n]=n;
        for(int i=1;i<=n;i++)
        {
            a[i]=i+a[i-1];
        }
        for(int i=n-1;i>=0;i--)
        {
            b[i]=b[i+1]+i;
        }
        for(int i=0;i<n+1;i++)
        {
            if(a[i]==b[i])
            return i;
        }
        return -1;
    }
};
