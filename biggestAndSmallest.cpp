// Write a console program with a main function that prompts the user to type a given number of integers, then prints the largest and smallest of all the numbers typed in by the user. You may assume the user enters a number greater than 0 for the number of numbers to read. Here is an example dialogue:

// Number of numbers? 4
// Number 1: 5
// Number 2: 13
// Number 3: -5
// Number 4: 2
// Biggest = 13
// Smallest = -5

#include<iostream>
using namespace std;
int main(){
    int n,num,min,max;
    cout<<"Number of numbers? ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Number "<<i<<": ";
        cin>>num;
        if(i==1){
            max=num;
            min=num;
        }
        if(num>max){
            max=num;
        }
        else if(num<=min){
            min=num;
        }
    }
    cout<< "Biggest = " << max << endl;
    cout<< "Smallest = " << min << endl;
   return 0;
}