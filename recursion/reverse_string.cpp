// #include<iostream>
// using namespace std;

// int main(){
//   return 0;
// }

#include<iostream>
using namespace std;

void reverse(int i,int j,string &str){
  if(i>j){
    return;
  }
  swap(str[i],str[j]);
  i++;
  j--;

  reverse(i,j,str);
}

int main(){
  string str="abcde";
  reverse(0,4,str);
  cout<<str;
  return 0;
}