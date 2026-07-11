#include<iostream>
using namespace std;

int main(){
  //1
// ***
// ***
// ***
  //square pattern
//   for(int i=0;i<3;i++){
//   for(int j=0;j<3;j++){
//     cout<<'*';
//   }
//   cout<<endl;
//  }


//2
// 1
// 22
// 333
//asecnding num
// for(int i=1;i<4;i++){
//   for(int j=1;j<=i;j++){
//     cout<<i;
//   }
//   cout<<endl;
// }


//3
//decending num
// 1
// 21
// 321
// for(int i=4;i>0;i--){
//   for(int j=4-i;j>0;j--){
//     cout<<j;
//   }
//   cout<<endl;
// }


//4
//reverse
// for(int i=1;i<=4;i++){
//   for(int j=1;j<4-i+1;j++){
//     cout<<'*';
//   }
//   cout<<endl;
// }
// ***
// **
// *


//5
//space star space
//    *
//   ***
//  *****
// for(int i=0;i<4;i++){
//   //space
//   for(int j=0;j<4-i;j++){
//     cout<<" ";
//   }
//   //star
//   for(int j=0;j<2*i-1;j++){
//     cout<<"*";
//   }
//   //space
//   for(int j=0;j<4-i;j++){
//     cout<<" ";
//   }
//   cout<<endl;
  
// }


//6

//space star space reverse
// *******
//  *****
//   ***
//    *
// for(int i=0;i<4;i++){
//   //space
//   for(int j=0;j<i;j++){
//     cout<<" ";
//   }
//   //star
//   for(int j=0;j<(2*4-(2*i+1));j++){
//     cout<<"*";
//   }
//   //space
//   for(int j=0;j<i;j++){
//     cout<<" ";
//   }
//   cout<<endl;
// }


//7
//comnibantion of both revsere and straight space star space
//    *
//   ***
//  *****
//  *****
//   ***
//    *
// for(int i=0;i<4;i++){
//   //space
//   for(int j=0;j<4-i;j++){
//     cout<<" ";
//   }
//   //star
//   for(int j=0;j<2*i-1;j++){
//     cout<<'*';
//   }
//     //space
//   for(int j=0;j<4-i;j++){
//     cout<<" ";
//   }
//   cout<<endl;
// }
// for(int i=0;i<3;i++){
//   //space
//   for(int j=0;j<=i;j++){
//     cout<<" ";
//   }
//   //star
//   for(int j=0;j<2*3-(2*i+1);j++){
//     cout<<'*';
//   }
//     //space
//   for(int j=0;j<=i;j++){
//     cout<<" ";
//   }
//   cout<<endl;
// }

//8
// half combo
// *
// **
// ***
// ****
// ***
// **
// *
// for(int i=0;i<4;i++){
//   for(int j=0;j<=i;j++){
//     cout<<'*';
//   }
//   cout<<endl;
// }
// for(int i=0;i<3;i++){
//   for(int j=0;j<3-i;j++){
//     cout<<'*';
//   }
//   cout<<endl;
// }


//9
//little thinking
// 0
// 10
// 010
// 1010
// 01010
// 101010
// 0101010
// int start=0;
// for(int i=0;i<8;i++){
//   if(i%2==0){
//     start=1;
//   }
//   else{
//     start=0;
//   }
//   for(int j=0;j<i;j++){
//     cout<<start;
//     start=1-start;
//   }
//   cout<<endl;
// }

//10
// 1      1
// 12    12
// 123  123
// 12341234
// for(int i=1;i<=4;i++){
//   for(int j=1;j<=i;j++){
//     cout<<j;
//   }
//   for(int j=0;j<(2*4-2*i);j++){
//     cout<<' ';
//   }
//   for(int j=1;j<=i;j++){
//     cout<<j;
//   }
//   cout<<endl;
// }

// 11
// 1      1
// 12    21
// 123  321
// 12344321
// for(int i=1; i<=4;i++){
//   for(int j=1;j<=i;j++){
//     cout<<j;
//   }
//   for(int j=0;j<(2*4-2*i);j++){
//     cout<<' ';
//   }
//   for(int j=i;j>=1;j--){
//     cout<<j;
//   }
//   cout<<endl;
// }

// 12
// 1
// 23
// 456
// int num=1;
// for(int i=0;i<4;i++){
//   for(int j=0;j<i;j++){
//     cout<<num;
//     num +=1;
//   }
//   cout<<endl;
// }

//13
// A
// BB
// CCC
// DDDD
// char ch='A';
// for(int i=1;i<=4;i++){
//   for(int j=1;j<=i;j++){
//     cout<<ch;
//   }
//    ch ++;
//   cout<<endl;
// }


// 14
// A
// AB
// ABC
// ABCD
// for(int i=1;i<=4;i++){
//   for(int j=1;j<=i;j++){
//     char ch='A'+j-1;
//     cout<<ch;
//   }
 
//   cout<<endl;
// }


//15
//      A     
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA
// for(int i=0;i<5;i++){
//   //space
  
  
//   for(int j=0;j<5-i;j++){
//     cout<<" ";
//   }
//   //star
//   char ch='A';
//   int breakpoint=((2*i+1)/2);
//   for(int j=0;j<2*i+1;j++){
//     cout<<ch;
//     if(j<breakpoint){
//       ch++;
//     }
//     else{
//       ch--;
//     }
//   }
//     //space
//   for(int j=0;j<5-i;j++){
//     cout<<" ";
//   }
//   cout<<endl;
// }




return 0;
}

