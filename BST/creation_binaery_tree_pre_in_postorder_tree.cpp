#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node* left;
  node* right;

  node(int val){
    data=val;
    left=NULL;
    right=NULL;
  }
};

node* binarytree(){
  int x;
 
  cin>>x;

  if(x==-1){
    return NULL;
  }

  node* temp=new node(x);
  cout<<"Enter the left node of "<<x<<" is: ";
  temp->left=binarytree();
  cout<<"Enter the right node of "<<x<<" is: ";
  temp->right=binarytree();

  return temp;

}
void preorder(node* root){
  //NLR
  if(root==NULL){
    return;
  }
  cout<<root->data;
  preorder(root->left);
  preorder(root->right);
}

void Inorder(node* root){
  //LNR
  if(root==NULL){
    return;
  }
  Inorder(root->left);
  cout<<root->data;
  Inorder(root->right);
}

void Postorder(node* root){
  //LRN
  if(root==NULL){
    return;
  }
  Postorder(root->left);
  Postorder(root->right);
  cout<<root->data;
}

int main(){
   cout<<"Enter the root node val :";

  node* root=binarytree();
  //preorder
  cout<<"preorder are: "<<endl;
  preorder( root);
  cout<<endl;
  cout<<"inorder are: "<<endl;
  Inorder(root);
  cout<<endl;
  cout<<"postorder are: "<<endl;
  Postorder(root);
  return 0;

}