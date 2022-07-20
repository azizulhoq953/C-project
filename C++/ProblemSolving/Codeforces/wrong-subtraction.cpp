
#include<bits/stdc++.h>
using namespace  std;
int main()
{
int num,r,i;
while(cin>>num>>r)
{
    for(i=1;i<=r;i++)
    {
        if(num%10>0)
        num--;
        else
        num=num/10;
    }
    cout<<num<<endl;
    num=0;
}
}
