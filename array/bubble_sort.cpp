#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int> &nums){
  for(int i=0;i<nums.size()-1;i++){
    for(int j=0;j<nums.size()-i-1;j++){
      if(nums[j]>nums[j+1]){
        swap(nums[j+1],nums[j]);
      }
    }
  }
}

int main(){
 vector<int> arr={1,7,2,9,8};
  bubblesort(arr);

  for(int i=0;i<arr.size();i++){
    cout<<arr[i];
  }

  return 0;
}