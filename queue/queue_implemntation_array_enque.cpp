#include<iostream>
#include<queue>
using namespace std;

int front = 0;
int rear = 0;
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

int main(){
 int size = 5;
  int *arr = new int[size];

    enqueue(5, size, arr);
    enqueue(8, size, arr);
    enqueue(7, size, arr);

    cout << "Queue elements are:" << endl;

  for(int i=0;i<rear;i++){
    cout<<arr[i]<<endl;
  }
  delete[] arr;
  return 0;
}