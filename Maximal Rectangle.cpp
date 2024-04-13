class Solution {
public:

int largestRectangleArea(vector<int>& heights) {
        int ans=0;
        int n=heights.size();
        int a[n];
        int b[n];
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                a[i]=0;
                st.push(i);
            }
            else
            {
                a[i]=st.top()+1;
                st.push(i);
            }
        }
        while(!st.empty())
        st.pop();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                b[i]=n-1;
                st.push(i);
            }
            else
            {
                b[i]=st.top()-1;
                st.push(i);
            }
        }
        for(int i=0;i<n;i++)
        {
            int x=heights[i];
            ans=max(ans,((b[i]-a[i]+1)*x));
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix)
    {
        int ans=0;
        int n=matrix.size();
        int x=matrix[0].size();
        int mat[n][x];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<x;j++)
            {
                if(matrix[i][j]=='0')
                mat[i][j]=0;
                else
                mat[i][j]=1;
            }
        }
        vector<int>v(x,0);
        // for(int j=0;j<x;j++)
        // v[j]=0;
        // for(int j=0;j<x;j++)
        //     v.push_back(mat[0][j]);
        // int cc=0;
        // for(int j=0;j<x;j++)
        // {
        //     if(v[j]==1)
        //     {
        //         cc++;
        //         ans=max(ans,cc);
        //     }
        //     else
        //     {
        //         cc=0;
        //     }
        // }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<x;j++)
            {
                if(mat[i][j]==0)
                v[j]=0;
                else
                v[j]++;            
            }
            ans=max(ans,largestRectangleArea(v));
        }
        return ans;
    }
};
