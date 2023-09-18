// Write a program which will take the coefficients of the quadratic equation a, b and c as input (floating points) and compute the quadratic equation.

// x= (-b +|- root (b^2-4ac))/2a

// Sample Input/Output:
// Enter value of a: 1
// Enter value of b: 4
// Enter value of c: 0 (0, -4)

#include <iostream>
#include<cmath>
using namespace std;
int main() {
    float a,b,c,x;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;
    x=(b*b)-(4*a*c);
    if(x<0){
        cout<<"("<<-b/(2*a)<<"+"<<sqrt(-x)/(2*a);
        cout<<","<<-b/(2*a)<<"-"<<sqrt(-x)/(2*a);
    }
    else{
        cout<<"("<<-b/(2*a)+sqrt(x)/(2*a);
        cout<<","<<-b/(2*a)-sqrt(x)/(2*a)<<")";
    }
    return 0;
}