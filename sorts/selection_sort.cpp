//selection sort
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int minindex=i;
            for(int j=i+1;j<=nums.size()-1;j++){
                if(nums[j]<nums[minindex]){
                    minindex=j;
                }
            }
            swap(nums[i],nums[minindex]);
        }
       return nums;
    }
     
};