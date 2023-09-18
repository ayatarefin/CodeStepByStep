// Two integer numbers are input through the keyboard into two variables C and D. Write a program to interchange the contents of C and D.

// Sample Input/Output:

// Enter the value of c: 5
// Enter the value of d: 10
// After swapping c = 10 and d = 5

#include<iostream>
using namespace std;
int main(){
    int c,d;
    cout<<"Enter the value of c: ";
    cin>>c;
    cout<<"Enter the value of d: ";
    cin>>d;
    cout<<"After swapping c = "<<d<<" and d = "<<c;
    return 0;
}