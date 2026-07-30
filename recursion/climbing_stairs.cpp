// we can climb the stair by the n-1 and either n-2 stair so
//  become the answer are become the recursion and the base condition are become the when goes negetive 
// the shows the return 0 and if 1 goes at the same position then return 1 


#include<iostream>
using namespace std;

int climbingstairs(int n){
  if(n<0){
    return 0;
  }
  if(n==0){
    return 1;
  }

  return climbingstairs(n-2)+climbingstairs(n-1);
}
int main(){
  cout<<climbingstairs(3)<<endl;
  cout<<climbingstairs(5);
  return 0;
}