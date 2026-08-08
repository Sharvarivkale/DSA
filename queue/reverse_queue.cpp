class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        stack<int>s;
        
        //copy to the stack
        while(!q.empty()){
            int element=q.front();
            q.pop();
            s.push(element);
        }
        
        //back to queue
        while(!s.empty()){
            int ele=s.top();
            s.pop();
            q.push(ele);
        }
        
    }
};