class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber>0) 
        {
            columnNumber--;
            char character='A'+(columnNumber%26);
            s=character+s;
            columnNumber/=26;
        }
        return s;
    }
}
