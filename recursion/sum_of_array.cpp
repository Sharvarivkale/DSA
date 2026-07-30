#include<iostream>
using namespace std;

int arrsum(int arr[],int size){
  if(size==0 ){
    return 0;
  }
  if(size==1){
    return arr[0];
  }
  
  return arr[0] + arrsum(arr+1,size-1);
  
}

int main(){
  int arr[5]={5,6,4,2,1};
  cout<<arrsum(arr,5);
  return 0;
}