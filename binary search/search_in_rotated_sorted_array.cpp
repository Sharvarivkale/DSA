class Solution {
public:
    int getpivot(vector<int>& nums){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]>nums[e]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
    int binarysearch(vector<int>& nums,int s,int e, int target){
  
        int mid=s+(e-s)/2;

       while(s<=e){
         if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
          e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
       }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot=getpivot(nums);
        int n=nums.size()-1;
        if(nums[pivot]<=target && target<=nums[n-1]){
          return binarysearch(nums,pivot,n-1,target);
        }
        else{
           return binarysearch(nums,0,pivot-1,target);
        }
         
    }
};