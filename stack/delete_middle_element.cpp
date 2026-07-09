class Solution {
  public:
    void solve(stack<int>& s,int count,int size){
        if(count==size/2){
            s.pop();
             return;
        }
        int num=s.top();
        s.pop();
        
         solve(s,count+1,size);
         
         s.push(num);
    }
    void deleteMid(stack<int>& s) {
        int size=s.size();
        int count=0;
        solve(s,count,size);
    }
};