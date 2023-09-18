// Write a function named evenSum that prompts the user for many integers and print the total even sum and maximum of the even numbers. You may assume that the user types at least one non-negative even integer.

// how many integers? 4
// next integer? 2
// next integer? 9
// next integer? 18
// next integer? 4
// even sum = 24
// even max = 18

#include<iostream>
using namespace std;
int evenSum(){
    int time,sum=0,max=0;
    cout<<"how many integers? ";
    cin>>time;
    for(int i=1;i<=time;i++){
        int x;
        cout<<"next integer? ";
        cin>>x;
        if(x%2==0){
            sum=sum+x;
            if(x>max){
                max=x;
            }
        }
    }
    cout<<"even sum = "<<sum<<endl;
    cout<<"even max = "<<max;
    return 0;
}