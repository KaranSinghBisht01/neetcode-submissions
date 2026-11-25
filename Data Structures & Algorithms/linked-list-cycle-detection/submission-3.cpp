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
    bool hasCycle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL || head->next==NULL || head->next->next==NULL) return false;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return 1;
        }
        return 0;       
    }
};
