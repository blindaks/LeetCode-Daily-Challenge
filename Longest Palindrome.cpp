class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(char ch:s)
        {
            mp[ch]++;
        }
        int odd=0;
        int even=0;
        int oddSum=0;
        for(auto it:mp)
        {
            if(it.second%2==0)
            even+=it.second;
            else
            {
                odd=1;
                oddSum+=(it.second-1);
            }
        }
        return even+odd+oddSum;
    }
};
