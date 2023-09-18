// Write a function named fibonacci that displays all the numbers in the Fibonacci Sequence up to a given max, starting with 0. The Italian mathematician Leonardo Fibonacci devised the Fibonacci sequence as a way to model the growth of a population of rabbits. The first two terms in the sequence are 0 and 1, and every subsequent term is a sum of the previous two terms. (The Fibonacci sequence has numerous applications in computer science and shows up in surprising places. It's used to compute logarithms, index and retrieve data, and as a building block in some route-planning algorithms.) Output from the example call of fibonacci(10000):

#include<iostream>
using namespace std;
void fibonacci(int max){
    cout<< "Fibonacci sequence up to " << max << ":" << endl;
    int sum = 1;
    int firstNum = 0;
    int secondNum = 1;
    cout << firstNum << endl;
    while (max > sum){
        cout << sum << endl;
        sum = (firstNum + secondNum);
        firstNum = secondNum;
        secondNum = sum;
    }
}