class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ch=letters[0];
        int low=0,high=letters.size()-1,mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(letters[mid]>target)
            {
                ch=letters[mid];
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ch;
    }

};
