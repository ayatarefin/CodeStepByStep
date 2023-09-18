// Write a recursive function named evenDigits that accepts an integer parameter n and returns a new integer containing only the even digits from n, in the same order. If n does not contain any even digits, return 0.

// For example, the call of evenDigits(8342116) should return 8426 and the call of evenDigits(35179) should return 0.

#include<iostream>
using namespace std;
int evenDigits(int num){
    if(num==0){
        return 0;
    }
    else if(num%2==0){
        return (num%10)+evenDigits(num/10)*10;
    }
    return evenDigits(num/10);
}