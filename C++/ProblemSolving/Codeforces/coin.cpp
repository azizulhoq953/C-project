#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,i,j,sum,cnt,ans;
    while(cin>>x){
        long long a[x];
        sum=0;
        for(i=0;i<x;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sum=sum/2;
        sort(a,a+x);
        cnt=0;
        ans=0;
        for(i=x-1;i>=0;i--){
            ans+=a[i];
            cnt++;
            if(ans>sum)
                break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
