class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        int x=points[0][0];
        int y=points[0][1];
        for(int i=1;i<points.size();i++)
        {
            int x1=points[i][0];
            int y1=points[i][1];
            ans+=max(abs(x1-x),abs(y1-y));
            x=x1;
            y=y1;
        }
        return ans;
    }
};
