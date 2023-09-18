// Write a complete C++ program with a main function that computes who won the Stanford-Berkeley football game. The program should ask the user for the two scores. You may assume that the user enters valid non-negative integers. Below is an example dialogue (user input is shown like this):

// Stanford: How many points did they score? 87
// Cal: How many points did they score? 3
// Stanford won!
// (You don't need to write any 'include' or 'using' statements.)

#include<iostream>
#include<string>
using namespace std;
int main(){
        int Stanford, Cal;
    cout<<"Stanford: How many points did they score? ";
    cin>>Stanford;
    cout<<"Cal: How many points did they score? ";
    cin>>Cal;
    if(Stanford>Cal){
        cout<<"Stanford won!";
    }
    else if(Cal>Stanford){
        cout<<"Cal won!";
    }
    else{
        cout<<"Match Draw";
    }
}