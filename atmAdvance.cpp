// Advance your program written for problem 6 and assume that this time the ATM machine can also deliver the currency notes of 1, 5, 10, 20, 50 and 100 along with 500 and 1000. If the amount to be withdrawn is taken as input then your program should print the currency notes required to deliver. Your program should deliver as least currency notes as possible Consider the sample input and output set given below:

// Sample Input/Output:

// Enter the amount: 365773
// Number of notes required of 1000 denomination: 365
// Number of notes required of 500 denomination: 1
// Number of notes required of 100 denomination: 2
// Number of notes required of 50 denomination: 1
// Number of notes required of 20 denomination: 1
// Number of notes required of 10 denomination: 0
// Number of notes required of 5 denomination: 0
// Number of notes required of 1 denomination: 3

#include<iostream>
using namespace std;
int main(){
    int x;
    int a,b,c,d,e,f,g,h;
    a=b=c=d=e=f=g=h=0;
    cout<<"Enter the amount: ";
    cin>>x;
    if(x>=1000){
    a=x/1000;
    x-=a*1000;
    }
    if(x>=500){
    b=x/500;
    x-=b*500;
    }
    if(x>=100){
    c=x/100;
    x-=c*100;
    }
    if(x>=50){
    d=x/50;
    x-=d*50;
    }
    if(x>=20){
    e=x/20;
    x-=e*20;
    }
    if(x>=10){
    f=x/10;
    x-=f*10;
    }
    if(x>=5){
    g=x/5;
    x-=g*5;
    }
    if(x>=1){
    h=x/1;
    x-=h*1;
    }
    cout<<"Number of notes required of 1000 denomination:"<<a<<endl;
    cout<<"Number of notes required of 500 denomination:"<<b<<endl;
    cout<<"Number of notes required of 100 denomination:"<<c<<endl;
    cout<<"Number of notes required of 50 denomination:"<<d<<endl;
    cout<<"Number of notes required of 20 denomination:"<<e<<endl;
    cout<<"Number of notes required of 10 denomination:"<<f<<endl;
    cout<<"Number of notes required of 5 denomination:"<<g<<endl;
    cout<<"Number of notes required of 1 denomination:"<<h<<endl;
    return 0;
}