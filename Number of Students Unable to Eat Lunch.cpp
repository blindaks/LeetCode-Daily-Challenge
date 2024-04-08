class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        int c=0;
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            q.push(students[i]);
        }
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            st.push(sandwiches[i]);
        }
        while(!q.empty() && c<q.size())
        {
            if(q.front()==st.top())
            {
                q.pop();
                st.pop();
                c=0;
            }
            else
            {
                q.push(q.front());
                q.pop();
                c++;
            }
        }
        return q.size();
    }
};
