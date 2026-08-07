#include<iostream>
#include<queue>
using namespace std;

int front=-1;
int rear=-1;

bool isempty(int *arr){
  if(rear==-1 && front==-1){
    return true;
  }
  return false;
}

bool isfull(int *arr,int size){
  if(front==0 && rear==size-1){
    return true;
  }
  else if((rear + 1) % size == front){
    return true;
  }
  return false;
}

void cenqueue(int *arr,int size,int data){
  if(isfull(arr,size)){
    cout<<"bhai full ho gaya!!";
    return;
  }
  else {
    if(rear==-1){
    rear=front=0;
  }
  else if(rear==size-1){
    rear=0;
  }
  else{
    rear ++;
  }
  arr[rear]=data;
  }
}


void cdequque(int *arr,int size){
  if(isempty(arr)){
    cout<<"bhai empty hai delete nhi kar sakata"<<endl;
    return;
  }
  else{
    arr[front]=-1;
    if(front==rear){
      front=rear=-1;
    }
    else if(front==size-1){
      front=0;
    }
    else{
      front++;
    }
  }
}
int main(){
  int size=6;
  int *arr=new int[size];

  cenqueue(arr,size,8);
  cenqueue(arr,size,4);
  cenqueue(arr,size,8);
  cenqueue(arr,size,4);
  cenqueue(arr,size,8);
  cenqueue(arr,size,4);


  for(int i=front;i<=rear;i++){
    cout<<arr[i]<<endl;
  }
  cenqueue(arr,size,8);
  cenqueue(arr,size,4);

  //deletion
  cdequque(arr,size);
  cdequque(arr,size);
  cdequque(arr,size);
  
  cout<<"after deletion"<<endl;
   for(int i=front;i<=rear;i++){
    cout<<arr[i]<<endl;
  }
  return 0;
}