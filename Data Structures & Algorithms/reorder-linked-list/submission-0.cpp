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
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* sec=slow->next;
        slow->next=NULL;
        ListNode* prev=slow->next;
        while(sec!=NULL){
            ListNode* temp=sec->next;
            sec->next=prev;
            prev=sec;
            sec=temp;
        }
        ListNode* curr=head;
        while(prev!=NULL){
            ListNode* temp1=curr->next;
            ListNode* temp2=prev->next;

            curr->next=prev;
            prev->next=temp1;

            curr=temp1;
            prev=temp2;
        }   
        return ;
    }
};
