class Solution {
public:
    int bestClosingTime(string customers) {
        int cur=count(customers.begin(),customers.end(),'Y');
        int m=cur;
        int h=0;

        for (int i=0;i<customers.size();i++) 
        {
            char ch=customers[i];
            if(ch=='Y') 
            cur--;
            else
            cur++;
            if(cur<m) 
            {
                h=i+1;
                m=cur;
            }
        }
        return h;
    }
};
