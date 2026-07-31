#include<iostream>
using namespace std;

bool binarysearch(int *arr,int s,int e,int key){
  if(s>e){
    return false;
  }
  int mid=s+(e-s)/2;
  if(arr[mid]==key){
    return true;
  }
  if(key<arr[mid]){
    return binarysearch(arr,s,mid-1,key);
  }
  else{
    return binarysearch(arr,mid+1,e,key);
  }

}

int main(){
  int arr[6]={5,8,9,44,56,68};
  int key=2;
  int ans= binarysearch(arr,0,6,key);

  if(ans){
    cout<<"bhai present hai";
  }
  else{
    cout<<"nahi bhai present";
  }
  return 0;
}