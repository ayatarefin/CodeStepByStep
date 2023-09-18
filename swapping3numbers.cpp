// Three integer numbers are input through the keyboard into three variables a, b and c . Write a program to interchange the contents of a, b and c as given in the sample input and output.

// Sample Input/Output:

// Enter the value of a: 5
// Enter the value of b: 10
// Enter the value of c: 15
// After swapping a = 10, b = 15, c = 5

#include<iostream>
using namespace std;
int main(){
    int a,b,c, temp;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    temp=a;
    a=b;
    b=c;
    c=temp;
    cout<<"After swapping a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    return 0;
}