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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head == NULL)
        return {-1, -1};
        if(head->next == NULL)
        return {-1, -1};
        if(head->next->next == NULL)
        return {-1, -1};
        vector<int> criticalPoints;
        int ind = 1;
        ListNode* prev = head;
        head = head -> next;
        while(head->next != NULL)
        {
            if((head->val < head->next->val && head->val < prev->val) || (head->val > head->next->val && head->val > prev->val)) 
            criticalPoints.push_back(ind);
            ind++;
            prev = head;
            head = head->next;
        }
        if(criticalPoints.size()<2)
        return {-1, -1};
        int maxDist = criticalPoints[criticalPoints.size() - 1] - criticalPoints[0];
        int minDist = INT_MAX;
        for(int i = 1; i < criticalPoints.size(); i++)
        {
            minDist = min(minDist, criticalPoints[i] - criticalPoints[i - 1]);
        }
        return {minDist, maxDist};
    }
};
