  class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int longest=1;
     int n =nums.size();
     if(n==0){
        return 0;
     }
     unordered_set<int> st;
     for(int i=0;i<n;i++){
        st.insert(nums[i]);
     }      

     for(auto it: st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int small=it;
        
        while(st.find(small+1)!=st.end()){
            small=small+1;
            cnt++;
        }
        longest=max(longest,cnt);
        }
        
     }
     return longest;



    }
};