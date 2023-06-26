class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long ans=0;
        priority_queue<int, vector<int>, greater<int>> first,last;
        int i=0;int j=costs.size()-1;
        
        while(k--)
        {
            while(first.size()<candidates && i<=j)
            {
                first.push(costs[i]);
                i++;
            }
            while(last.size()<candidates && i<=j)
            {
                last.push(costs[j]);
                j--;
            }
            
            if(last.size()==0)
            {
                last.push(INT_MAX);
            }
            if(first.size()==0)
            {
                first.push(INT_MAX);
            }
               if(first.top()<=last.top())
                {
                    ans+=first.top();
                    first.pop();
                }
                else
                {
                    ans+=last.top();
                    last.pop();
                }
        }
        return ans;
    }
};
