// If a four digit number is input through the keyboard, write a program to reverse the digits of the number. For example,

// Sample Input/Output:

// Enter an four digit number: 1234
// Reversed number = 4321

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,sum=0,temp;
    cout<<"Enter an four digit number: ";
    cin>>a;
    for(int i=3;i>=0;--i){
        temp=a%10;
        sum=sum+temp*pow(10,i);
        a=a/10;
    }
    cout<<"Reversed number = "<<sum;
    return 0;
}