class Solution {
public:

    void insertatend(Node* &head, int value) {

        Node* newNode = new Node(value);

        if(head == NULL){
            head = newNode;
        }
        else{
            Node* temp = head;

            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    Node* copyRandomList(Node* head) {

        Node* copyhead = NULL;

        Node* temp = head;

        while(temp){
            insertatend(copyhead, temp->val);
            temp = temp->next;
        }

        unordered_map<Node*, Node*> oldtonew;

        Node* copylist = copyhead;
        Node* originallist = head;

        while(copylist && originallist){
            oldtonew[originallist] = copylist;
            originallist = originallist->next;
            copylist = copylist->next;
        }

        copylist = copyhead;
        originallist = head;

        while(copylist){
            copylist->random = oldtonew[originallist->random];
            originallist = originallist->next;
            copylist = copylist->next;
        }

        return copyhead;
    }
};