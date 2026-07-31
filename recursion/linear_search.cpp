#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size,int key){
  if(size==0){
    return false;
  }
  if(key==arr[0]){
    return true;
  }
  else{
    return linearsearch(arr+1,size-1,key);
  }
}

int main(){
  int arr[6]={5,6,8,3,9,4};
  int key=2;
  if(linearsearch(arr,6,key)){
    cout<<"present"<<endl;
  }
  else{
    cout<<"absent"<<endl;
  }
  return 0;

}