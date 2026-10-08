/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
          
        if (head == NULL) {
            return NULL;
        }

        // Map original node -> copied node
        unordered_map<Node*, Node*> mp;

        // Step 1: Create all new nodes
        Node* curr = head;

        while (curr != NULL) {
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }

        // Step 2: Connect next and random pointers
        curr = head;

        while (curr != NULL) {
            mp[curr]->next = mp[curr->next];
            mp[curr]->random = mp[curr->random];

            curr = curr->next;
        }

        // Return copied head
        return mp[head];
        
    }
};
