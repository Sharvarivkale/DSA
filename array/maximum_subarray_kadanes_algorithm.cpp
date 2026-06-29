class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxi=INT_MIN;
      int sum=0;
      for(int i=0;i<nums.size();i++){
         sum += nums[i];
         if(sum<0){
            sum=0;
         }
         else if(sum>maxi){
            maxi=max(maxi,sum);
         }
      }
      return maxi;  
    }
};