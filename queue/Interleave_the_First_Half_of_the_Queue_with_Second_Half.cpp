class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        int n=q.size();
        queue<int> nq;
        
        for(int i=0;i<n/2;i++){
            int element=q.front();
            q.pop();
            nq.push(element);
        }
        
        while(!nq.empty()){
            int data=nq.front();
            nq.pop();
            q.push(data);
            int element=q.front();
            q.pop();
            q.push(element);
        }
    }
};