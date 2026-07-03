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

void reverse(node* & head){
    node* curr=head;
    node* prev=NULL;
    node* future=NULL;
    
    while(curr){
       future=curr->next;
       curr->next=prev;
       prev=curr;
       curr=future;
        
    }
    head=prev;

}

void display(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main() {

    cout << "Start small. Ship something."<<endl;
    
    cout<<"first linked list"<<endl;
    node* head1=new node(9);
    node* first=new node(7);
    node* sec=new node(6);
    node* third=new node(8);
    node* forth=new node(4);
    
    head1->next=first;
    first->next=sec;
    sec->next=third;
    third->next=forth;
    
    display(head1);
    cout<<"after perform the reverse operation at list 1"<<endl;
    reverse(head1);
    display(head1);
    
    //all about list sec
    cout<<"sec linked list"<<endl;
    node* head2=new node(6);
    node* first2=new node(4);
    node* sec2=new node(3);
    node* third2=new node(8);
  
    head2->next=first2;
    first2->next=sec2;
    sec2->next=third2;
   
    display(head2);
    cout<<"after perform the reverse operation at list 1"<<endl;
    reverse(head2);
    display(head2);
    
    //amin function regarding adding are carried out here
    node* curr1=head1;
    node* curr2=head2;
    node* head=NULL;
    node*tail=head;
    int sum=0;
    int carry=0;
    int rem=0;
    
    while(curr1 && curr2){
       sum=curr1->data+curr2->data+carry;
       rem=sum%10;
       carry=sum/10;
       
       if(head==NULL){
           head=new node(rem);
           tail=head;
       }
       else{
           tail->next=new node(rem);
           tail=tail->next;
       }
     
       curr1=curr1->next;
       curr2=curr2->next;
       
    }
    while(curr1){
        sum=curr1->data+carry;
        rem=sum%10;
        
        carry=sum/10;
        
       if(head==NULL){
           head=new node(rem);
           tail=head;
       }
       else{
           tail->next=new node(rem);
           tail=tail->next;
       }
        curr1=curr1->next;
    }
    while(curr2){
        sum=curr2->data+carry;
        rem=sum%10;
        carry=sum/10;
        
       if(head==NULL){
           head=new node(rem);
           tail=head;
       }
       else{
           tail->next=new node(rem);
           tail=tail->next;
       }
        curr2=curr2->next;
    }
    while(carry){
        if(head==NULL){
           head=new node(carry);
           tail=head;
       }
       else{
           tail->next=new node(carry%10);
           carry/=10;
           tail=tail->next;
       } 
    }
    cout<<"after addition"<<endl;
    reverse(head);
    display(head);
    return 0;
}