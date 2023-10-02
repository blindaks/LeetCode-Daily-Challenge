class Solution {
public:
    bool winnerOfGame(string colors) {
        int l=colors.length();
        int x=0,y=0;
        int c=0;
        for(int i=0;i<l;i++)
        {
            if(colors[i]!='A')
            {
                if(c>=3)
                {
                    x+=c-2;
                }
                c=0;
            }
            else
            {
                c++;
            }
        }
        if(c>=3)
        x+=c-2;
        c=0;
        for(int i=0;i<l;i++)
        {
            if(colors[i]!='B')
            {
                if(c>=3)
                y+=c-2;
                c=0;
            }
            else
            {
                c++;
            }
        }
        if(c>=3)
        y+=c-2;
        return x>y;
    }
};
