
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
//insertion at start

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

//insertion at end

void insertionatend(node* &head,int data){
    if(head==NULL){
        head=new node(5);
    }
    else{
        node* temp=head;
        while(temp->next){
            temp=temp->next;
        }
        node* nnode=new node(data);
        temp->next=nnode;
        nnode->prev=temp;
        
    }
}

void insertionatanyposition(node* &head,int position,int data){
    if(position==0){
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
    else{
        node* curr=head;
        
        while(--position){
            curr=curr->next;
        }
        if(curr->next==NULL){
            node* temp=new node(data);
            temp->prev=curr;
            curr->next=temp;
            
        }
        else{
            node* temp=new node(data);
            temp->prev=curr;
            temp->next=curr->next;
            curr->next=temp;
            temp->next->prev=curr->next;
        }
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
  
    cout<<"abhi tak to badhiya  he!!"<<endl;
    node* head=new node(5);
    insertionatbegin(head,10);
    insertionatend(head,10);
    insertionatanyposition(head,2,30);
    display(head);

    return 0;
}