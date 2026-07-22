#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> &nums,int target){
int start=0;
int end=nums.size()-1;
int mid=start+(end-start)/2;

while(start<=end){


  if(nums[mid]==target){
    return mid;
  }
  else if(target<nums[mid]){
    end=mid-1;

  }
  else{
   start=mid+1;
  }
   mid=start+(end-start)/2;
}
return -1;
  
}
int main(){
  vector<int> arr={1,2,3,4,5,8,9};

  int ans=binarysearch(arr,9);

  if(ans != -1){
    cout<<"element found at index :"<<ans<<endl;
  }
  else{
    cout<<"element are not found";
  }
  return 0;
}