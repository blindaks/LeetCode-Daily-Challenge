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
    ListNode* doubleIt(ListNode* head) {
        if(head==NULL)
        return head;
        if(head->next==NULL && head->val==0)
        return head;
        vector<int>v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        reverse(v.begin(),v.end());
        vector<int>vec;
        int carry=0;
        for(int i=0;i<v.size();i++)
        {
            int z=v[i]*2+carry;
            vec.push_back(z%10);
            if(z<10)
            {
                carry=0;
            }
            else
            {
                z/=10;
                carry=z%10;
            }
        }  
        if(carry!=0)
        {
            vec.push_back(carry);
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
