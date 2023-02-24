#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2=0;
    int a[]={100,20,10,5,1};
    cin>>num1;
    for(int i=0; i<5; i++)
    {
        num2+=num1/a[i];
        num1=num1%a[i];
    }
    cout<<num2<<endl;
    return 0;
}