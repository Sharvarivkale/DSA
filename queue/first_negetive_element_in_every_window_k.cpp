class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // code here
        deque<int>dq;
        vector<int> ans;
        
        for(int i=0;i<k;i++){
            if(arr[i]<0){
                dq.push_back(i);
            }
        }
        
        if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
        
        //this for remaining vector window
        
        for(int i=k;i<arr.size();i++){
            
            if(!dq.empty() &&  dq.front() < i-k+1){//this is for the sliding window
                dq.pop_front();
            }
            if(arr[i]<0){
                dq.push_back(i);
            }
             if(dq.size()>0){
              ans.push_back(arr[dq.front()]);
            }
            else{
              ans.push_back(0);
            }
            
        }
        return ans;
    }
};