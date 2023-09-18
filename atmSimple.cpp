// The ATM machine can only give out the currency notes of 1000 and 500. Assume that the user has entered the value in the multiples of 500, and then your program should print how many currency notes of 1000 and 500 need to be dispatched out of the machine. Also, assume that you have unlimited numbers of 1000 and 500 currency notes. Your program should deliver as least currency notes as possible For example, if the user has entered the amount to be withdrawn to 25500 then your program should print 25 notes of 1000 and 1 note of 500. (Hint: use % operator)

// Sample Input/Output:

// Enter Amount : 25500
// 25 notes of 1000 and 1 note of 500

#include<iostream>
using namespace std;
int main(){
    int c,a,b;
    a=b=0;
    cout<<"Enter Amount : ";
    cin>>c;
    if(c>=1000){
    a=c/1000;
    c-=a*1000;
    }
    if(c>=500){
    b=c/500;
    c-=b*500;
    }
    cout<<a<<" notes of 1000 and "<<b<<" note of 500";
}