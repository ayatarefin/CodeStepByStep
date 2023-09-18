// Write a function named computeAverage that accepts an array of integers and its length as parameters and computes and returns the mean of all elements in the array. For example, if an array named a contains {1, -2, 4, -4, 9, -6, 16, -8, 25, -10}, then the call of computeAverage(a, 10) should return 2.5.

// Constraints: You may assume that the array contains at least one element. Your function should not modify the elements of the array.

#include<iostream>
using namespace std;
double computeAverage(int a[1000],int length){
    int i=0;
    float sum=0,avarage=0;
    for(int i=0;i<length;i++){
        sum+=a[i];
    }
    avarage=(sum)/length;
    return avarage;
}
int main(){
    int a[]={1,-2,4,-4,9,-6,16,-8,25,-10};
    float avarage;
    cout<<computeAverage(a,10);
    return 0;
}