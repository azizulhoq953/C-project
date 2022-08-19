#include<bits/stdc++.h>
using namespace std;

int main(){

double n,a,divid,asset;
cin>>n;
for(int i=0;i<n;i++){
        cin>>a;

       divid= a+a;
       asset=divid/n;
}


cout<<fixed<<setprecision(12)<<asset<<endl;
//printf("%.12lf",asset);

return 0;
}
