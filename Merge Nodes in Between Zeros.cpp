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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head;
        ListNode* temp = a;
        int sum = 0;
        while(b != NULL)
        {
            b = b->next;
            while(b!=NULL && b->val !=0 )
            {
                sum+=b->val;
                b=b->next;
            }
            if(b!=NULL)
            {
                a->val = sum;
                sum = 0;
                temp = a;
                a = a->next;
            }
        }
        temp->next = NULL;
        return head;
    }
};
