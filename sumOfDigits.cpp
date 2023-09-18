// If a five digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: use % operator).

// Sample Input/Output:
// Enter an five digit number: 54781
// The sum of digits = 25

#include<iostream>
using namespace std;
int main(){
    int a,sum=0,temp;
    cout<<"Enter a five digit number: ";
    cin>>a;
    for(;a!=0;){
        temp=a%10;
        sum+=temp;
        a=a/10;
    }
    cout<<"The sum of digits = "<<sum;
    return 0;
}