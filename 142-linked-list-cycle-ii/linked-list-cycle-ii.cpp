/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return head;
         ListNode *fast=head;
         ListNode *slow=head;
         bool loop=false;
         while(fast!=NULL && fast->next!=NULL)
         {
             slow=slow->next;
             fast=fast->next->next;
             if(slow==fast)
             {
             loop=true;
             break; 
             } 
         }
         if(loop){
             fast=head;
             while(slow!=fast){
                 slow=slow->next;
                 fast=fast->next;
             }
             return fast;
         }
         return NULL;
    }
};