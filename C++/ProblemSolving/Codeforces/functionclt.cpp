#include<iostream>
#include<cmath>
using namespace std;

int main(){
long long n,k;
cin>>n;
if(n%2==0)
    k=n/2;
else{
    k=((n+1)/2) * (-1);

}
 cout<<k<<endl;
return 0;

}
