// The following program attempts to prompt the user for their age and then print it back to the user. But it contains five kinds of errors. Fix the code below so that it compiles and runs properly.

#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "How old are you? ";
    cin >> age;

    cout << "You are "<<age<<", wow!"<<endl;
    return 0;
}