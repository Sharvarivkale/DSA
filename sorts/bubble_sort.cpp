class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for (int i=1;i<nums.size();i++){
            //for rounds goes from the 1 to n-1
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        return nums;
      }
    }