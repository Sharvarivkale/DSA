class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mn=INT_MIN;
        int smn=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mn){
                 smn=mn;
                mn=nums[i];
               
            }
            else if(nums[i]>smn ){
                smn=nums[i];
            }
        }
        long long int ans=(mn-1)*(smn-1);
        return ans;
        
    }
};