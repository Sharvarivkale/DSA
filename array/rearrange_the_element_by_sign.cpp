class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> rearrange(n,0);
        int positive=0;
        int negative=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                rearrange[negative]=nums[i];
                negative +=2;
            }
            else{
                rearrange[positive]=nums[i];
                positive +=2;
            }
        }
      return rearrange;
    }
};