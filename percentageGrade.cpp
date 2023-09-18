// What's wrong with the following code? Modify it to produce the intended output. Make sure to properly utilize if/else/if statements to avoid redundancy and avoid unnecessary tests. Do not use && or || in your solution.

// What percentage did you earn? 87
// You got a B!

#include<iostream>
#include<string>
using namespace std;
int main(){
    int percent;
cout<<"What percentage did you earn? ";
cin>>percent;
if (percent >= 90) {
    cout << "You got an A!" << endl;
}
else if (percent >= 80) {
    cout << "You got a B!" << endl;
}
else if (percent >= 70) {
    cout << "You got a C!" << endl;
}
else if (percent >= 60) {
    cout << "You got a D!" << endl;
}
else{
    cout << "You got an F!" << endl;
}
}