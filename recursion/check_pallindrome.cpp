#include<iostream>
using namespace std;

bool checkpallindrome(string &str,int i,int j){
  if(i>j){
    return true;
  }
  if(str[i]!=str[j]){
    return false;
  }
  else{
   return checkpallindrome( str, i+1, j-1);
  }
  

}

int main(){
  string str="abcea";
  if(checkpallindrome(str,0,4)){
    cout<<"yes";
  }
  else{
    cout<<"no";
  }
  
  return 0;
}