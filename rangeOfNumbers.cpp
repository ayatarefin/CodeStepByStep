// Write a function named rangeOfNumbers that accepts two integers as parameters and prints as console output the sequence of numbers between the two parameters, separated by commas and spaces. Print an increasing sequence if the first parameter's value is smaller than the second; otherwise, print a decreasing sequence. If the two numbers are the same, that number should be printed by itself. Here are some example calls to your function and the resulting expected output:

// Call	                    Console Output
// rangeOfNumbers(2, 8);	2, 3, 4, 5, 6, 7, 8
// rangeOfNumbers(18, 11);	18, 17, 16, 15, 14, 13, 12, 11
// rangeOfNumbers(42, 42);	42

#include<iostream>
#include<string>
using namespace std;
void rangeOfNumbers(int f,int l){
    if(f<l){
        for(int i=f;i<=l-1;i++){
            cout<<i<<", ";
        }
        cout<<l;
    }
    else if(f>l){
        for(int i=f;i>=l+1;i--){
            cout<<i<<", ";
        }
        cout<<l;
    }
    else
        cout<<l;
}