class Solution {
public:
string decToBinary(int n)
{
    string s="";
    int i = 0;
    while (n > 0) {
 
        int x=n%2;
        if(x==0)
        s="0"+s;
        else
        s="1"+s;
        n = n / 2;
        i++;
    }
    return s;
}
    int minFlips(int a, int b, int c) {
        string x=decToBinary( a);
        string y=decToBinary( b);
        string z=decToBinary( c);
        int ans=0;
        int l1=x.length();int l2=y.length();int l3=z.length();
        int maximum=0;
        maximum=max(maximum,l1);
        maximum=max(maximum,l2);
        maximum=max(maximum,l3);
        for(int i=0;i<maximum-l1;i++)
        x="0"+x;
        for(int i=0;i<maximum-l2;i++)
        y="0"+y;
        for(int i=0;i<maximum-l3;i++)
        z="0"+z;
        for(int i=0;i<z.length();i++)
        {
            if(z[i]=='0')
            {
                if(x[i]=='1')
                ans++;
                if(y[i]=='1')
                ans++;
            }
            else if(z[i]=='1')
            {
                if(x[i]=='0' && y[i]=='0')
                ans++;
            }
        }
        cout<<x<<" "<<y<<" "<<z;
        return ans;
    }
};
