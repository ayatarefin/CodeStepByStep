// Write a function named sqrt that accepts an integer N as a parameter and returns the square root of N as an integer. The challenge here is that you must not use sqrt or pow or other library functions to calculate the square root; rather, you must compute it yourself. You should return the square root as a truncated integer; for example, the square root of 7 is approximately 2.65, but your function should return 2. You may assume that the value of N passed is a positive integer.

#include<iostream>
using namespace std;
int sqrt(int x){
    int i = 0;
    for (i = 0; (i * i) <= x; ++i){
    
   }

    return (i - 1);
}