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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0,head);
        ListNode* prev=&dummy;
        ListNode* curr=head;

        while(n>0){
            curr=curr->next;
            n--;
        }
        while(curr!=NULL){
            prev=prev->next;
            curr=curr->next;
        }
        prev->next=prev->next->next;
        return dummy.next;
    }
};
