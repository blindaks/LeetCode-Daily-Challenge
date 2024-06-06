class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize)
        return false;
        int n = hand.size();
        map<int,int> mp;
        for(int i : hand)
        mp[i]++;
        while(mp.size())
        {
            int x = mp.begin()->first;
            for(int i=0; i<groupSize; i++)
            {
                if(mp.find(x + i) == mp.end() || mp[x + i] == 0)
                {
                    return false;
                }
                else
                {
                    mp[x + i]--;
                    if(mp[x + i]==0)
                    {
                        mp.erase(x + i);
                    }
                }
            }
        }
        return true;
    }
};
