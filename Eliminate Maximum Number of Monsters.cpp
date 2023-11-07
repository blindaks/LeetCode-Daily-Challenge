class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int>time;
        for(int i=0;i<dist.size();i++)
        {
            if(dist[i]%speed[i]==0)
            time.push_back(dist[i]/speed[i]);
            else
            time.push_back(dist[i]/speed[i] +1);
        }
        int ans=0;
        sort(time.begin(),time.end());
        int x=1;
        for(int i=0;i<time.size();i++)
        {
            if(time[i]-x>=0)
            ans++;
            else
            break;
            x++;
        }
        return ans;
    }
};
