// Write a function named numberSquare that accepts two integer parameters, a min and a max, and prints the numbers in the range from min to max inclusive in a square pattern. Each line of the square consists of a wrapping sequence of integers increasing from min and max. The first line begins with min, the second line begins with min + 1, and so on. When the sequence in any line reaches max, it wraps around back to min. You may assume that min is less than or equal to max. For example, the call of numberSquare(1, 5); should print:

// 12345
// 23451
// 34512
// 45123
// 51234

#include<iostream>
using namespace std;
int numberSquare(int min=1,int max=5){
    int numseq=max-min+1;
    for(int i=min;i<=max;i++){
        int j=i;
        while(numseq!=0){
            cout<<j;
            j++;
            if(j>max){
                j=min;
            }
            numseq--;
        }
        numseq=max-min+1;
        cout<<endl;
    }
return 0;
}