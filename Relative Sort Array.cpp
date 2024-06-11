class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        for(int i : arr1)
        mp[i]++;
        vector<int> v;
        for(int i: arr2)
        {
            if(mp.find(i) != mp.end())
            {
                int f = mp[i];
                while(f--)
                v.push_back(i);
            }
        }
        sort(arr1.begin(), arr1.end());
        for(int i: arr1)
        {
            if(find(arr2.begin(), arr2.end(), i) == arr2.end())
            v.push_back(i);
        }
        return v;
    }
};
