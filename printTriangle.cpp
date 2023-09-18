// Write a function named printTriangle that uses for loops to produce the following output:

// #
// ##
// ###
// ####
// #####
// ######

#include<iostream>
using namespace std;
int printTriangle(){
    int triangle=7;
    for(int i=1;i<triangle;i++){
        for(int j=0;j<i;j++){
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}