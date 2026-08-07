#include<iostream>
#include<queue>
using namespace std;

int front=0;
int rear=0;

void enqueue(int data,int size,int *arr){
  if(rear==size && front==0){
    cout<<"bhai queue full hai"<<endl;
    return;
  }
  else{
    arr[rear]=data;
    rear++;
  }
}

void dequeue(int *arr){
  if(front==rear){
    cout<<"bhai arr are empty"<<endl;
    return;
  }
  else{
    arr[front]=-1;
    front++;
    if(front==rear){
      front=0;
      rear=0;
    }
  }
}




int main(){
  int size=6;
  int *arr=new int[size];
  enqueue(5, size, arr);
  enqueue(8, size, arr);
  enqueue(7, size, arr);
  enqueue(6, size, arr);

  cout << "Queue elements before enqueue are:" << endl;

  for(int i=0;i<rear;i++){
    cout<<arr[i]<<endl;
  }
  cout << "Queue elements after enqueue are:" << endl;
  dequeue(arr);
  dequeue(arr);
  dequeue(arr);
  dequeue(arr);

  for(int i=0;i<rear;i++){
    cout<<arr[i]<<endl;
  }
  cout<<front<<" "<<rear<<endl;
  return 0;
}