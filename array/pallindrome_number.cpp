class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n =x;
        int reverse=0;
        while(n>0){
            int r=n%10;
            reverse=reverse*10+r;
            n=n/10;

        }
        if(reverse==x){
            return true;
        }
        else{
            return false;
        }
        
    }
};