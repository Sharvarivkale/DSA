class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int element;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                element=nums[i];
            }
            if(element==nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(element==nums[i]){
                cnt2++;
            }
        }
        if(cnt2>(nums.size()/2)){
            return element;
        }
        return -1;
    }
};