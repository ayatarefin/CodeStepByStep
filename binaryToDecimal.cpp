// Write a function named binaryToDecimal that accepts an integer parameter whose digits are meant to represent binary (base-2) digits, and returns an integer of that number's representation in decimal (base-10). For example, the call of binaryToDecimal(101011) should return 43.

// Constraints: Do not use a string in your solution. Also do not use any built-in base conversion functions from the system libraries.

#include <iostream>
using namespace std;
int binaryToDecimal(int num){
    int decimal=0;
    int power=0;
    while(num>0){
        if(num%10==1){
            if(power==0){
                decimal+=1;
            }
            else{
                int a=1;
                for(int i=1;i<=power;++i){
                    a*=2;
                }
                decimal+=a;
            }
        }
        ++power;
        num=num/10;
    }
    return decimal;
}