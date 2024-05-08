class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3)
        return false;
        int vow=0,con=0;
        for(char c:word)
        {
            if(c>=48 && c<=57)
            continue;
            else if(c>=97 && c<=122)
            {
                if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vow++;
                else
                con++;
            }
            else if(c>=65 && c<=90)
            {
                if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
                vow++;
                else
                con++;
            }
            else
            return false;
        }
        if(vow>0 && con>0)
        return true;
        return false;
    }
};
