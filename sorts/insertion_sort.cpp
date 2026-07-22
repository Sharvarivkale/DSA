//insertion sort
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      for(int i=0;i<nums.size()-1;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && nums[j]>key){
          arr[j+1]=arr[j];
          j--;
        }
        arr[j+1]=key;
      }
    return nums;
    }
  };