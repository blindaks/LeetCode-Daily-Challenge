class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()==2)
        return true;
        double slope=0.0;
        double y=coordinates[1][1]-coordinates[0][1];
        double x=coordinates[1][0]-coordinates[0][0];
        if(coordinates[1][0]==0 && coordinates[0][0]==0)
        {
            for(int i=2;i<coordinates.size();i++)
            {
                if(coordinates[i][0]!=0)
                return false;
            }
            return true;
        }
        slope=y/x;
        for(int i=2;i<coordinates.size();i++)
        {
            y=coordinates[i][1]-coordinates[i-1][1];
            x=coordinates[i][0]-coordinates[i-1][0];
            if((y/x)!=slope)
            return false;
        }
        return true;
    }
};
