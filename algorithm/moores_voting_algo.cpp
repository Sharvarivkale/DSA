class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt;
        int element;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                element=nums[i];
            }
            if(element==nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(element==nums[i]){
                cnt1++;
            }
        }
        if(cnt1>(nums.size()/2)){
            return element;
        }  
        return element; 
    }
};