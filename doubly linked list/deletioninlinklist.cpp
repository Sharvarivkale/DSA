
#include <iostream>
using namespace std;

//node creation in dll
class node{
    public:
    int data;
    node* prev;
    node* next;
    
    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    
};
void insertionatbegin(node* &head,int data){
    if(head==NULL){
        head=new node(data);
    }
    else{
        node* temp=new node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void deletionatstart(node* &head){
    if(head==NULL){
        cout<<"bhai node hi nhi ye empty hai!!"<<endl;
        return;
    }
    else{
        if(head->next==NULL){
            node*temp=head;
            delete temp;
            head=NULL;
        }
        else{
        node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        }
    }
}

void deletionatend(node* &head){
     if(head==NULL){
        cout<<"bhai node hi nhi ye empty hai!!"<<endl;
        return;
    }
    else{
        if(head->next==NULL){
             node*temp=head;
            delete temp;
            head=NULL;
        }
        else{
            node* temp=head;
            while(temp->next){
                temp=temp->next;
            }
            temp->prev->next=NULL;
            delete temp;
        }
    }
}

void deletionatanyposition(node* &head, int position)
{
    if(head == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    // Delete first node
    if(position == 1)
    {
        node* temp = head;
        head = head->next;

        if(head)
            head->prev = NULL;

        delete temp;
        return;
    }

    node* curr = head;

    for(int i = 1; i < position && curr != NULL; i++)
    {
        curr = curr->next;
    }

    if(curr == NULL)
    {
        cout << "Invalid Position\n";
        return;
    }

    // Last node
    if(curr->next == NULL)
    {
        curr->prev->next = NULL;
        delete curr;
    }
    // Middle node
    else
    {
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        delete curr;
    }
}

void display(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main() {

   cout << "abhi tak to thike he badame ka pata nhi!!!"<<endl;
   node* head=new node(5);

   insertionatbegin(head,10);
   insertionatbegin(head,20);
   insertionatbegin(head,30);
   insertionatbegin(head,40);
   insertionatbegin(head,50);
      display(head);
      cout<<"after deletion at begin"<<endl;
   deletionatstart(head);
    display(head);
    cout<<"after deletion at end"<<endl;
    deletionatend(head);
     display(head);
      cout<<"after deletion at position"<<endl;
     deletionatanyposition(head,2);
     display(head);

    return 0;
}