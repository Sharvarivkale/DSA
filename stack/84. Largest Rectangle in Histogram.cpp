class Solution {
private:
  vector<int> nextsmallerelement(vector<int>& heights,int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            int element=heights[i];
            while(st.top()!= -1 && heights[st.top()]>=element){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
           
        }
        return ans;
    }
        vector<int> prevsmallerelement(vector<int>& heights,int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int element=heights[i];
            while(st.top()!= -1 && heights[st.top()]>=element){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
           
        }
        return ans;
    }
public:
  
    int largestRectangleArea(vector<int>& heights) {
        int n= heights.size();

        vector<int> next(n);
        next=nextsmallerelement(heights,n);
        
        vector<int> prev(n);
        prev=prevsmallerelement(heights,n);
         int maxarea=INT_MIN;
        for(int i=0;i<n;i++){
            if(next[i]==-1){
                next[i]=n;
            }
            int height=heights[i];
            int width=next[i]-prev[i]-1;
            int newarea=(height*width);
             maxarea=max(newarea,maxarea);

        }

       return maxarea;
        
    }
};