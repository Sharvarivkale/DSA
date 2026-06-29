class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int remain=0;
        int newbottles=0;
        while(numBottles>=numExchange){
            newbottles=numBottles/numExchange;
            remain=numBottles%numExchange;
            ans +=newbottles;
            numBottles=newbottles+remain;
        
        }
        return ans;
        
    }
};