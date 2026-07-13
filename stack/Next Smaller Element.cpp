class Solution {

  public:
    vector<int> help_classmate(vector<int> arr, int n) {
        stack<int> st;
        st.push(-1);
        
        for(int i=n-1;i>=0;i--){
            int element=arr[i];
          while(st.top() >= element){
             st.pop();
          }
            arr[i]=st.top();
            st.push(element);
        }
        return arr;
    }
};