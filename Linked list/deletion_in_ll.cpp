
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void display(Node* head){
    Node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void deletionatbegin(Node* &head){
    if(head==NULL){
        cout<<"linked list are empty"<<endl;
        return;
    }
    else{
        Node*temp=head;
        head=head->next;
        delete temp;
    }
}

void deletionatend(Node* &head){
    if(head==NULL){
        cout<<"bhai list empty hai!!"<<endl;
        return;
    }
    if(head->next==NULL){
        Node*temp=head;
        head=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        
        while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        delete curr;
    }
}

void deleteionatmiddle(Node* &head,int position){
    if(head==NULL){
        cout<<"bhai list empty hai!!"<<endl;
        return;
    }
    if(position==1){
        Node*temp=head;
        head=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        position--;
        
        while(position --){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
    }
    
}


int main() {
    cout<<"all are goode till here"<<endl;
    Node* head=new Node(40);
    Node* sec=new Node(50);
    Node* third=new Node(60);
    Node* fort=new Node(70);
    Node* five=new Node(80);
    Node* six=new Node(90);
    
    head->next=sec;
    sec->next=third;
    third->next=fort;
    fort->next=five;
    five->next=six;
    display(head);
    
    cout<<"after deletion at the begin"<<endl;
    deletionatbegin(head);
    display(head);
    cout<<"             "<<endl;
    
     cout<<"after deletion at the position"<<endl; 
    deleteionatmiddle(head,3);
     display(head);
    
    cout<<"after deletion at the end"<<endl; 
    deletionatend(head);
    display(head);
    deletionatend(head);
    display(head);
    return 0;
}