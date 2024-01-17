class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>count;
        for(int num:arr)
        count[num]++;
        map<int,int>freq;
        for(auto it:count)
        freq[it.second]++;
        for(auto it:freq)
        {
            if(it.second>1)
            return false;
        }
        return true;
    }
};
