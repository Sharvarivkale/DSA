class Solution {
public:
    int canCompleteCircuit(vector<int>& petrol, vector<int>& distance) {
      int balance=0;
      int defecient=0;
      int start=0;

      for(int i=0;i<petrol.size();i++){
        balance +=petrol[i]-distance[i];

        if(balance<0){
          defecient+=balance;
          balance=0;
          start=i+1;
        }
      }

      if(defecient+balance>=0){
        return start;
      }
      else{
        return -1;
      }
    }
};