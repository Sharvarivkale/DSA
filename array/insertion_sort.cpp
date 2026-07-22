#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int> &nums){
  for(int i=1;i<nums.size()-1;i++){
    int key=nums[i];
    int j=i-1;

    while(j>=0 && nums[j]>key){
      nums[j+1]=nums[j];
      j--;
    }
    nums[j+1]=key;
  }
}

int main(){
  vector<int> arr={8,2,6,4,1};
  insertionsort(arr);

  for(int i=0;i<arr.size()-1;i++){
    cout<<arr[i];
  }
  return 0;
}