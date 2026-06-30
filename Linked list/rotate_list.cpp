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
    ListNode* rotateRight(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
        
        while(temp){
            count++;
            temp=temp->next;
        }
      
        if(head == NULL || head->next == NULL || k == 0)
          return head;

         k=k%count;
        count=count-k;
        if(k==0){
            return head;
        }
        
        ListNode* curr=head;
        ListNode* prev=NULL;

        while(count--){
         prev=curr;
         curr=curr->next;
        }
        prev->next=NULL;
        ListNode* tail=curr;
        while(tail->next){
            tail=tail->next;
        }
        tail->next=head;
        head=curr;
        return head;
    }
};