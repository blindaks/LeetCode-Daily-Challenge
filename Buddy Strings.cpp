class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s==goal)
        {
            set<char>st;
            for(auto it:s)
            st.insert(it);
            if(st.size()<s.length())
            return true;
            else
            return false;
        }
        int i=0;
        int j=s.length()-1;;

        while(i<j && s[i]==goal[i]){
            i++;
        }

        while(j>=0 && s[j]==goal[j])
        {
            j--;
        }

        if(i<j){
            swap(s[i],s[j]);
        }
        if(s==goal)
        return true;
        else
        return false;
    }
};
