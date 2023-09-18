// Write a recursive function named largestDigit that accepts an integer parameter and returns the largest digit value that appears in that integer. Your function should work for both positive and negative numbers. If a number contains only a single digit, that digit's value is by definition the largest. The following table shows several example calls:

// Call	                    Returns
// largestDigit(14263203)	    6
// largestDigit(845)	        8
// largestDigit(52649)      	9
// largestDigit(3)	            3
// largestDigit(0)	            0
// largestDigit(-573026)	    7
// largestDigit(-2)	            2
// Constraints: You may not use a string, array, vector, or any data structure (stack, map, set, etc.). Your function must be recursive and not use any loops (for, while, etc.). Your solution should run in no worse than O(N) time, where N is the number of digits in the number.

#include<iostream>
 using namespace std;
 int largestDigit(int num){
     int x=0;
     int y=0;
     if(num<0){
         num=num*-1;
     }
     if(num==0){
         return 0;
     }
     else{
         x=num%10;
         y=largestDigit(num/10);
         if(x>y){
             return x;
         }
         else{
             return y;
         }
     }
 }
 int main(){
     int num;
     cin>>num;
     cout<<largestDigit(num);
     return 0;
 }