#include<iostream>
#include<vector>
using namespace std;

int firstocc(vector<int> &nums,int target){
  int s=0;
  int e=nums.size()-1;
  int mid=s+(e-s)/2;
  int ans=-1;

  while(s<=e){
    if(nums[mid]==target){
      ans=mid;
      e=mid-1;
    }
    else if(target<nums[mid]){
      e=mid-1;
    }
    else{
      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}
int lastocc(vector<int> &nums,int target){
  int s=0;
  int e=nums.size()-1;
  int mid=s+(e-s)/2;
  int ans=-1;

  while(s<=e){
    if(nums[mid]==target){
      ans=mid;
     s=mid+1;
    }
    else if(target<nums[mid]){
      e=mid-1;
    }
    else{
      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}

int main(){
  vector<int> arr={2,3,5,5,5,5,5,5,5,7,8};
  int first=firstocc(arr,5);
  int last=lastocc(arr,5);

  cout<<"first occ of the elment in arr are :"<<first<<endl;
  cout<<"last occ of the elment in arr are :"<<last<<endl;
  return 0;
}