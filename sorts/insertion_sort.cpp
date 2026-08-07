//insertion sort
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      for(int i=0;i<nums.size()-1;i++){
        int key=nums[i];
        int j=i-1;

        while(j>=0 && nums[j]>key){
          nums[j+1]=nums[j];
          j--;
        }
        nums[j+1]=key;
      }
    return nums;
    }
  };