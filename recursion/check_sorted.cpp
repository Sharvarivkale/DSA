#include<iostream>
using namespace std;

bool issorted(int arr[],int size){
  if(size==0){
    return true;
  }
  if(size==1){
    return true;
  }
  if(arr[0]>arr[1]){
    return false;
  }
  return issorted(arr+1,size-1);
  
}

int main(){
  int arr[5]={8,2,3,4,5};
  
  if(issorted(arr,5)){
    cout<<"arr are sorted";
  }
  else{
    cout<<"array are not sorted";
  }
  return 0;
}