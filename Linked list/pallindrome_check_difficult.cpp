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
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode* temp=head;
//         vector<int> ans;
//         while(temp){
//           ans.push_back(temp->val);
//           temp=temp->next;
//         }
//         int i=0;
//         int j=ans.size()-1;
//         while(i<j){
//             if(ans[i]!=ans[j]){
//                 return false;
//             }
//             else{
//                 i++;
//                 j--;
//             }
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int count=0;
        ListNode* temp=head;

        while(temp){
            count++;
            temp=temp->next;
        }

        int newcount=count/2;
        ListNode* curr=head;
        ListNode* prev=temp;
        while(newcount--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        
        //now sec part begin
        ListNode* future=NULL;
        prev=NULL;
        while(curr){
            future=curr->next;
            curr->next=prev;
            prev=curr;
            curr=future;
        }

        ListNode* head1=head;
        ListNode* head2=prev;

        if(head1->val!=head2->val){
            return false;
        }
        return true;
    }
};