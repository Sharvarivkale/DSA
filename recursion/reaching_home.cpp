#include<iostream>
using namespace std;

void rechinghome(int src,int dest){
  cout<<src<<" steps to reach home"<<endl;
  if(src==dest){
    cout<<"bhai pohachala ghariii!!";
    return;
  }
  return rechinghome(src+1,dest);

}

int main(){
  rechinghome(1,10);
  return 0;
}