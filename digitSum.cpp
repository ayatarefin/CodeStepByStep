// Write a recursive function named digitSum that accepts an integer as a parameter and returns the sum of its digits. For example, calling digitSum(1729) should return 1 + 7 + 2 + 9, which is 19. If the number is negative, return the negation of the value. For example, calling digitSum(-1729) should return -19.

// Constraints: Do not declare any global variables. Do not use any loops; you must use recursion. Do not use any auxiliary data structures like vector, map, set, array, etc. Also do not solve this problem using a string. You can declare as many primitive variables like ints as you like. You are allowed to define other "helper" functions if you like; they are subject to these same constraints.

#include<iostream>
using namespace std;
int digitSum(int num){
    if(num==0){
        return 0;
    }
    return (num%10)+digitSum(num/10);
}