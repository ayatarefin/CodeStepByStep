// Write a console program with a main function that prompts the user for numbers until the user types -1, then outputs the sum of the numbers.
int main()
{
    int n = 0, sum = 0;
    while (1)
    {
        cout<<"Type a number: ";
        cin>>n;
        if (n==-1)
        {
            break;
        }
        else
        {
            sum += n;
        }
    }
    cout<<"Sum is "<<sum<<"\n";
}