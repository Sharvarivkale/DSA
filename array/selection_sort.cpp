#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int> &nums){
  for(int i=0;i<nums.size()-1;i++){
    int minindex=i;

    for(int j=i+1;j<nums.size();j++){
      if(nums[j]<nums[minindex]){
        minindex=j;
      }
    }
    swap(nums[i],nums[minindex]);
  }
}
int main(){
  vector<int> arr={7,9,8,3,2,1};

  selectionsort(arr);

  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}