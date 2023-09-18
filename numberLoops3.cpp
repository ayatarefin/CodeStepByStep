// Write nested for loops to produce the following output:

int n = 5;
    for (int i = 1; i <= 5; i++)
    {
        n = 5-i;
        for (int j = 1; j <= n; j++)
        {
            cout<<".";
        }
        cout<<i;
        for (int j = n+2; j <= 5; j++)
        {
            cout<<".";
        }
        cout<<"\n";
    }