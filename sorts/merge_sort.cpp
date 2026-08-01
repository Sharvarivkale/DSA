#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
  int mid=s+(e-s)/2;

  int len1=mid-s+1;
  int len2=e-mid;
  int *first=new int[len1];
  int *sec=new int[len2];

  int mainindexofarr=s;
  for(int i=0;i<len1;i++){
    first[i]=arr[mainindexofarr++];
  }

  mainindexofarr=mid+1;
  for(int i=0;i<len2;i++){
    sec[i]=arr[mainindexofarr++];
  }

  //now merge 2 sorted array
  int i=0,j=0;
  mainindexofarr=s;
  while(i<len1 && j<len2){
    if(first[i]<=sec[j]){
      arr[mainindexofarr++]=first[i++];
    }
    else{
      arr[mainindexofarr++]=sec[j++];
    }
  }

  while(i<len1){
    arr[mainindexofarr++]=first[i++];
  }
  while(j<len2){
    arr[mainindexofarr++]=sec[j++];
  }
  delete[] first;
  delete[] sec;

}

void mergesort(int *arr,int s,int e){

  if(s>=e){
    return;
  }
  int mid=s+(e-s)/2;

  //left side
  mergesort(arr,s,mid);

  //right side
  mergesort(arr,mid+1,e);

 //merge both
  merge(arr,s,e);
}

int main(){
  int arr[9]={2,5,8,1,8,6,7,2,4};
  mergesort(arr,0,8);

  for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}