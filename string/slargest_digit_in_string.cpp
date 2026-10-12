class Solution {
public:
    int secondHighest(string s) {
        int largest=-1;
        int slargest=-1;

        for(char ch:s){
            if(isdigit(ch)){
                int digit=ch-'0';

                if(digit>largest){
                    slargest=largest;
                    largest=digit; 
                }
                else if(digit<largest && digit>slargest){
                    slargest=digit;
                }
            }
        }
        return slargest;
        
    }
};