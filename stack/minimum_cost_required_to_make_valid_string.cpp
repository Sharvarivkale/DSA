class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;

        if(s.length()%2!=0){
            return -1;
        }
        for(int i=0;i<s.length();i++){
            char ch =s[i];

            if(ch=='('){
                st.push(ch);
            }
            else{
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }
        int a=0;
        int b=0;
        while(!st.empty()){
            if(st.top()=='('){
                a++;
            }
            else{
                b++;
            }
        }
         int c=(a+1)/2;
         int d=(b+1)/2;
         int ans=c+d;
         return ans;

        
    }
};