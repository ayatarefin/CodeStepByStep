// Write a function named banish that accepts two arrays of integers a1 and a2 as parameters along with their lengths, and removes all occurrences of a2's values from a1. An element is "removed" by shifting all subsequent elements one index to the left to cover it up, placing a 0 into the last index. The original relative ordering of a1's elements should be retained.
void banish(int a1[],int length1,int a2[],int length2){
    for(int i=0;i<length2;i++){
        for(int j=0;j<length1;j++){
            if(a1[j]==a2[i]){
                for(int k=j;k<length1;k++){
                    a1[k]=a1[k+1];
                }
                i=0;
                j=0;
                a1[length1-1]=0;
            }
        }
    }
    for(int i=0;i<length1;i++){
        cout<<a1[i]<<" ";
    }
}