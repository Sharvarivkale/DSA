#include<iostream>
using namespace std;

void bubblesort(int arr[],int size){
  if(size==0 || size==1){
    return;
  }
  for(int i=0;i<size-1;i++){
    if(arr[i]>arr[i+1]){
      swap(arr[i],arr[i+1]);
    }
  }
  bubblesort(arr,size-1);
}

int main(){
  int arr[6]={4,3,8,9,10,7};
  bubblesort(arr,6);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}