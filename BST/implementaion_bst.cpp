#include<iostream>
using namespace std;
#include <queue>

class Node{
    public:
    int data;
    Node*left;
    Node* right;

    Node(int val){
        data=val;
         left =NULL;
        right =NULL;
    }
};

int main(){
    int data;
    cout<<"enter the val for the root node: ";
    cin>>data;

    Node* root=new Node(data);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){

        Node* current=q.front();
        q.pop();

        //for the left node

        cout<<"enter the val for the left node: ";
        cin>>data;
        if(data!=-1){
            current->left=new Node(data);
            q.push(current->left);
        }
        //for the right node

        cout<<"enter the val for the right node: ";
        cin>>data;
        if(data!=-1){
            current->right=new Node(data);
            q.push(current->right);
        }

    }
    return 0;
}
