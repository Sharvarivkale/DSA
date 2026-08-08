#include<iostream>
using namespace std;

class dequeue{
  int *arr;
  int front,rear;
  int size;
  
  public:
  dequeue(int n){
    size=n;
    rear=-1;
    front=-1;
    arr=new int[size];
  }

  bool isempty(){
    if(rear==-1 && front==-1){
      return true;
    }
    return false;
  }
  bool isfull(){
    if(front==0 && rear==size-1 ||rear==(front-1) % (size-1)){
      return true;
    }
    return false;
  }

  void push_front(int data){
    if(isfull()){
      cout<<"bhai nhi add kar shakte kqu ki ye full hai"<<endl;
      return;
    }
    else{
      if(front==-1){//this condition ar get apply when no one element are present in queue
        rear=front=0;
      }
      else if(front==0){//if the element at the 1st option now then need to move the front to the end 
        front=size-1;
      }
      else{
        front--;
      }
        arr[front]=data;
    }
  }

  void push_back(int data){
     if(isfull()){
      cout<<"bhai nhi add kar shakte kqu ki ye full hai"<<endl;
      return;
    }
    else{
      if(rear==-1){//this condition ar get apply when no one element are present in queue
        front=rear=0;
      }
      else if(rear==size-1){
        rear=0;
      }
      else{
        rear++;
      }
      arr[rear]=data;
    }
  }

  void pop_front(){
    if(isempty()){
      cout<<"bahen underflow hai!!"<<endl;
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
  void pop_back(){
    if(isempty()){
      cout<<"bahen underflow hai!!"<<endl;
      return;
    }
    else{
      arr[rear]=-1;
      if(front==rear){
        front=rear=-1;
      }
      else if(rear==0){
        rear=size-1;
      }
      else{
        rear--;
      }
    }
  }
      void display() {
        if (isempty()) {
            cout << "Deque is Empty\n";
            return;
        }

        int i = front;

        while (true) {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % size;
        }

        cout << endl;
    }


};

int main(){
  dequeue obj(6);

  obj.push_front(45);
  obj.push_back(46);
  obj.push_back(89);
  obj.push_back(70);
  obj.push_back(41);
  obj.push_back(51);

  obj.pop_back();
  obj.pop_back();
  obj.pop_front();
  obj.display();

  return 0;
}