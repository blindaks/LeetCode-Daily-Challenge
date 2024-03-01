class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int z=0,o=0;
        for(char ch:s)
        {
            if(ch=='0') z++;
            else o++;
        }
        string str="";
        while(o!=1)
        {
            str+="1";
            o--;
        }
        while(z--)
        {
            str+="0";
        }
        str+="1";
        return str;
    }
};
