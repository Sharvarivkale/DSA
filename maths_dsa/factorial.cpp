#include<iostream>
using namespace std;

int recursion(int n){
  int fact=1;
  if(n==0 || n==1){
    return 1;
  }
  else{
    fact=n*recursion(n-1);
    return fact;
  }
}

int main(){
 
  cout<< recursion(5);
  return 0;
}