/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        vector<int>v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        reverse(v.begin(),v.end());
        int maxSoFar=v[0];
        vector<int>vec;
        vec.push_back(v[0]);
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>=maxSoFar)
            {
                vec.push_back(v[i]);
                maxSoFar=v[i];
            }
        }
        reverse(vec.begin(),vec.end());
        ListNode* newHead=new ListNode(vec[0]);
        ListNode* x=newHead;
        for(int i=1;i<vec.size();i++)
        {
            ListNode* temp=new ListNode(vec[i]);
            x->next=temp;
            x=temp;
        }
        return newHead;
    }
};
