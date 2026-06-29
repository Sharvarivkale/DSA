// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node{
    
    public:
    int data;
    node* next;
    
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void insertatbegin(node* &head,int data){
    node* nnode=new node(data);
    nnode->next=head;
    head=nnode;
}

void insertatend(node* &head,int data){
    node* nnode=new node(data);
    node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=nnode;
}
int main() {
    cout<<"all good here"<<endl;
     node* head=new node(5);
     node* sec=new node(6);
     node* third=new node(7);
     
     head->next=sec;
     sec->next=third;
     
     display(head);
     insertatbegin(head,4);
     insertatend(head,8);
        display(head);
    return 0;
}