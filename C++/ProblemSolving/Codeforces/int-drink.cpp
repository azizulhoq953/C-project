#include<bits/stdc++.h>
using namespace std;


int main()
{
    int l,m,n,i,j,sol;
    cin>>m;
    int a[m],p;
    int cnt=0;
    for(n=0; n<m; n++)
    {
        cin>>a[n];
    }
    cin>>l;
    sort(a,a+m);
    while(l--)
    {
        cin>>j;
        sol=upper_bound(a,a+m, j)-a;
        cout<<sol<<endl;
    }
return 0;
}