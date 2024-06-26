class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low=0;
        long long high=sqrt(c);
        while(low<=high)
        {
            if((low*low+high*high)==c)
            return true;
            else if((low*low+high*high)<c)
            low++;
            else
            high--;
        }
        return false;
    }
};
