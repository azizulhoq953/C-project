#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p=0, maxP=0;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;

        p=p-a;
        p=p+b;

        if(p>maxP)
            maxP=p;
    }
    cout<<maxP<<endl;
}