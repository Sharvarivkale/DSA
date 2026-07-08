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
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int pos=0;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                break;
            }
        } 
        if(fast==NULL || fast->next==NULL){
            return 0;
        }
        // else{
        //     slow=head;
        //     while(fast!=slow){
        //      slow=slow->next;
        //      fast=fast->next;
        //      pos++;
        //     }
        
        // }
        return 1;

    //    ListNode* slow=head;
    //     ListNode* fast=head;
    //      while(fast && fast->next){
    //       slow=slow->next;
    //          fast=fast->next->next;
    //          if(fast==slow){
    //              return 1;
    //          }
    //      } 
    //      return 0;
    }
};