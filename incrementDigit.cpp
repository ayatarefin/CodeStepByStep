// If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its individual digits. For example if the number that is input is 1239 then the output should be displayed as 2340.

// Sample Input/Output:

// Enter a five digit number: 12345
// Number after incrementing each digit = 23456

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,sum=0,temp;
    cout<<"Enter a five digit number: ";
    cin>>a;
    for(int i=0;i<5;i++){
        temp=a%10 + 1;
        a=a/10;
        if(temp>9){
            continue;
        }
        sum=sum+temp*pow(10,i);
    }
    cout<<"Number after incrementing each digit = "<<sum;
    return 0;
}