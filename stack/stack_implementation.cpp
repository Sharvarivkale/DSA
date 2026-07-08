#include<iostream>
using namespace std;


class stack{
  public:
  int top;
  int size;
  int *arr;

  stack(int size){
    this->size=size;
    top=-1;
    arr=new int[size];
  }

  void push(int element){
    if(size-top>1){
      top++;
      arr[top]=element;
    }
    else{
      cout<<"stack overflow"<<endl;
    }
  }

  void pop(){
    if(top>=0){
      top--;
    }
    else{
      cout<<"stack underflow"<<endl;

    }
  }

  int peek(){
    if(top>=0){
      return arr[top];
    }
    else{
      return -1;
    }
  }
};

int main(){
  stack obj(5);
  obj.push(5);
  obj.push(8);
  obj.pop();
  obj.peek();
  cout<<"peek are "<<obj.peek()<<endl;

  return 0;
}