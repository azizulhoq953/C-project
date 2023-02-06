#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    long long Nneed=n/a;
    if(n%a!=0){
        Nneed++;
    }
    long long Mneed=m/a;
    if(m%a!=0){
        Mneed++;
    }
    long long result=Nneed*Mneed;
    cout<<result<<endl;
}