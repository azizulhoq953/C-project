#include<iostream>
using namespace std;

int main()
{

    int a,b;
    int diff;


    scanf("%d",&a);

    scanf("%d",&b);
    if( a>b )
        diff=a-b;
    else
        diff=b-a;

    cout<<("\nDifference between %d and %d is = %d",a,b,diff);
    return 0;
}
