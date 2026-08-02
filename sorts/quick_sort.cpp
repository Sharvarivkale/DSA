#include<iostream>
using namespace std;

  
void quicksort(int *arr,int s,int e,int size){
  if(s>=e){
    return;
  }
  int pivot=arr[s];
  int cnt=0;

  for(int i=s;i<=e;i++){
    if(arr[i]<pivot){
      cnt++;
    }
  }
  int pivotindex=s+cnt;


  swap(arr[s],arr[pivotindex]);

  int i=s;
  int j=e;
  pivot=arr[pivotindex];

  while(i<pivotindex && j>pivotindex){
    while(i < pivotindex && arr[i]<=pivot){
      i++;
    }
    while(j > pivotindex && arr[j]>=pivot){
      j--;
    }
    if(arr[i]>pivot && arr[j]<pivot){
      swap(arr[i],arr[j]);
      i++;
      j--;
    }
  }
  quicksort(arr, s, pivotindex - 1,9);
  quicksort(arr, pivotindex + 1, e,9);
} 

int main(){
  int arr[9]={2,5,8,1,8,6,7,2,4};
  quicksort(arr,0,8,9);

  for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}