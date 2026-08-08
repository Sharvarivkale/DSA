class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        int n=q.size();
        stack<int> st;
        
        // copy 1st k lement to the stack and pop from the queue
        
        for(int i=0;i<k;i++){
            int element=q.front();
            q.pop();
            st.push(element);
        }
        
        //join to the queue 4 5 3 2 1
        while(!st.empty()){
            int ele=st.top();
            st.pop();
            q.push(ele);
        }
        
        //
        int t=n-k;
        
        while(t--){
           int data=q.front();
           q.pop();
           q.push(data); 
        }
        return q;
    }
};