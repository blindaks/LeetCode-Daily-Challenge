class Solution {
public:
    string largestOddNumber(string num) {
        int l=num.length();
        for(int i=l-1;i>=0;i--)
        {
            if((num[i]-48)%2)
            return num.substr(0,i+1);
        }
        return "";
    }
};
