class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode* prev=NULL;
      ListNode* curr=head;
      ListNode* future=NULL;

      while(curr){
        future=curr->next;
        curr->next=prev;
        prev=curr;
        curr=future;
      }
      head=prev;
      return head;
    }
};