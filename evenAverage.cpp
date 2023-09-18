// Write C++ code that prompts the user for nonzero integers, and then prints the average of all even numbers typed. (When the user types 0, stop asking for input.) You may assume that the user types at least one even integer. The following is an example output from one run of your code:

// Integer? 1
// Integer? 3
// Integer? 2
// Integer? 6
// Integer? 4
// Integer? 10
// Integer? 9
// Integer? 0
// Average: 5.5

#include<iostream>
#include<string>
using namespace std;
int main(){
    int sum=0,x,count=0;
     cout<<"Integer? ";
        cin>>x;
    while(x!=0){
        if(x%2==0){
        count++;
        sum=sum+x;
        }
        cout<<"Integer? ";
        cin>>x;
    }
    cout<<"Average: "<<double (sum)/count;

}