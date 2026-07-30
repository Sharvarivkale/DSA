#include<iostream>
using namespace std;

int counting(int n){

  if(n==0){
    return 0;
  }
  cout<<n;
  return counting(n-1);

}
int main(){
 
 counting(5);
  return 0;
}