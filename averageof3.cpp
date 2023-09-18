//Write a function named averageOf3 that accepts three integers as parameters and returns the average of the three integers as a real number. For example, the call of averageOf3(4, 7, 13) returns 8.

#include <iostream>
using namespace std;
double averageOf3(float a, float b, float c){
    float avg=(a+b+c)/3;
    cout<<avg;
    return avg;
}
int main(){
    int a=0,b=0,c=0;
    cin>>a>>b>>c;
    averageOf3(a,b,c);
    return 0;
}