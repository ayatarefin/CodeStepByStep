// Write a function named floydsTriangle that accepts an integer k as a parameter and prints a k-row version of Floyd's triangle. Floyd's triangle is a sequence of increasing numbers, starting with 1, where each Nth row of numbers displays the next N numbers in the sequence. For example, the call of floydsTriangle(5);

void floydsTriangle(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout<<count<<" ";
            ++count;
        }
        cout<<"\n";
    }
}