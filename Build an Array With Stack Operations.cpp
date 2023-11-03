class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>v;
        int x=1;
        for(int i=0;i<target.size();i++)
        {
            v.push_back("Push");
            if(target[i]!=x)
            {
                v.push_back("Pop");
                i--;
            }
            x++;
        }
        return v;
    }
};
