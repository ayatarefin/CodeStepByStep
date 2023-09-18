// Take a capital letter as input from the user and convert it to its small letter. Print the output.

// Sample Input/Output:

// Enter any alphabet in uppercase: E
// In lowercase it is e

#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter any alphabet in uppercase : ";
    cin>>c;
    c=c+32;
    cout<<"In lowercase it is "<<c;
    return 0;
}