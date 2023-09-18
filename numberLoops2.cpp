// Write nested for loops to produce the following output:

for (int i = 1; i <= 5; i++)
{
        int n = 5 - i;
        for(int j = 1; j <= n; j++)
        {
            cout<<".";
        }
        n = i;
        for(int j = 1; j <= n; j++)
        {
            cout<<i;
        }
        cout<<"\n";
}