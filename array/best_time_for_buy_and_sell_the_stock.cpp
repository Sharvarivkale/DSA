class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buymini=prices[0];
        int profit=0;
        int cost=0;

        for(int i=0;i<prices.size();i++){
            cost=prices[i]-buymini;
            profit=max(cost,profit);
           buymini=min(buymini,prices[i]);
        }
       return profit; 
    }
};