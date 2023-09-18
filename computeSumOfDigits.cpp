// Write a console program with a main function that prompts the user to type an integer and computes the sum of the digits of that integer. You may assume that the user types a non-negative integer. Match the following output format:

// Type an integer: 827104
// Digit sum is 22

#include<iostream>
using namespace std;
int main(){
   int type,sum;
   cout<<"Type an integer: ";
   cin>>type;
   while(type!=0){
       sum+=type%10;
       type=type/10;
   }
   cout<<"Digit sum is "<<sum;
}