class Solution {
public:
    int  minSwaps(string s) {

        if(s.length() % 2 != 0)
            return -1;

        stack<char> st;

        for(char ch : s){

            if(ch == '['){
                st.push(ch);
            }
            else{

                if(!st.empty() && st.top() == '['){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }

        int a = 0, b = 0;

        while(!st.empty()){

            if(st.top() == '[')
                a++;
            else
                b++;

            st.pop();
        }
        int c=(a + 1) / 2;
        int d= (b + 1) / 2;

        return (c+d)/2;
    }
};