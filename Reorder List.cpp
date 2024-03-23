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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
        return;
        stack<ListNode*>st;
        ListNode* temp=head;
        int l=0;
        while(temp!=NULL)
        {
            st.push(temp);
            l++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<l/2;i++)
        {
            ListNode* x=st.top();
            st.pop();
            x->next=temp->next;
            temp->next=x;
            temp=x->next;
        }
        temp->next=NULL;
    }
};
