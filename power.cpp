// Write a recursive function named power that accepts two integers representing a base and an exponent and returns the base raised to that exponent. For example, the call of power(3, 4) should return 34 or 81 . If the exponent passed is negative, throw an integer exception.

// Do not use loops or auxiliary data structures; solve the problem recursively. Also do not use the provided C++ pow function in your solution.

#include<iostream>
using namespace std;
int power(int base, int exponent){
    if(exponent==0){
        return 1;
    }
    return power(base,exponent-1)*base;
}
int main(){
    cout<<power(2,2);
    return 0;
}