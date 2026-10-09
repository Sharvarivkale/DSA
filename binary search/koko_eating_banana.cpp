class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int e=*max_element(piles.begin(),piles.end());
        int mid=s+(e-s)/2;
      

        while(s<=e){
            long long hours = 0;
            
            for(int pile : piles){
                hours+=(pile+mid-1)/mid;
            }
            if(hours<=h){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;

        }
        return s;
        
    }
};
