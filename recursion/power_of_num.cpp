#include<iostream>
using namespace std;

int pow(int n){
  if(n==0){
    return 1;
  }
  int powans=1;
  powans=2*pow(n-1);
  return powans;
}

int main(){
  cout<<pow(5);
  return 0;
}