class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       for(int i=0;i<nums.size()-1;i++){
        for(int j=0;j<nums.size()-i-1;j++){
            if(nums[j+1]>nums[j]){
                swap(nums[j+1],nums[j]);
            }
        }
       }
       return nums;
      }
    }