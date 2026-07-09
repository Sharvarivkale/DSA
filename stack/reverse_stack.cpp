class Solution {
  public:
  
    void insertatbottom(stack<int> &st,int num){
        if(st.empty()){
            st.push(num);
            return;
        }
        int numm=st.top();
        st.pop();
        insertatbottom(st,num);
        
        st.push(numm);
        
    }
    
    void reverseStack(stack<int> &st) {
       if(st.empty()){
           return;
       }
       int num=st.top();
       st.pop();
       
       reverseStack(st);
       
       insertatbottom(st,num);
        
    }
};