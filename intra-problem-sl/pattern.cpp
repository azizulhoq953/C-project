#include <iostream>
using namespace std;
int main()
{
    int i, j, diff, value;
    int N[1000];
cin>>N;

    for(i=1; i<=N; i++)
    {
        diff = N-1; // Initialize difference to total rows - 1
        value = i;  // Initialize value to the current row number
        for(j=1; j<=i; j++)
        {
       cout<<" "<<value ;

            value += diff; // Computes the next value to be printed
            diff--;        // Decrements the difference
        }

       cout<<"\n";
    }

    return 0;
}



