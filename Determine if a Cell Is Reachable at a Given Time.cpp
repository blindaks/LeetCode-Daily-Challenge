class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int x=abs(sx-fx);
        int y=abs(sy-fy);
        int z=min(x,y);
        if(fx>=sx)
        x=sx+z;
        else
        x=sx-z;
        if(fy>=sy)
        y=sy+z;
        else
        y=sy-z;
        int k=abs(fx-x)+abs(fy-y);
        if(t>=(z+k))
        {
            if(sx==fx && sy==fy && t==1)
            return false;
            return true;
        }
        return false;
    }
};
