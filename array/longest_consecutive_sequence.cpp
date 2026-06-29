class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int n=nums.size();
     if(n==0){
        return 0;
     }  
     int cnt=0;
     int longest=1;
    int lastsmaller=INT_MIN;
     for(int i=0;i<n;i++){
        if(nums[i]-1==lastsmaller){
            lastsmaller=nums[i];
            cnt++;
        }
        else if(nums[i]!=lastsmaller){
            cnt=1;
            lastsmaller=nums[i];
        }
        longest=max(longest,cnt);
     } 
     return longest;
    }
};