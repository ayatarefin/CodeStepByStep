// Write a console program with a main function that prompts the user to type two integers and prints the sequence of numbers between the two arguments, separated by commas and spaces. Print an increasing sequence if the first argument is smaller than the second; otherwise, print a decreasing sequence. If the two numbers are the same, that number should be printed by itself.
#include<iostream>
using namespace std;
int main(){
    int f,l;
    cout<<"Start? ";
    cin>>f;
    cout<<"End? ";
    cin>>l;
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
    return 0;
}