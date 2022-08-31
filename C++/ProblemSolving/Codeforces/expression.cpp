#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){

ll i,ans,a,b,c;
while(cin>>a>>b>>c){
    ans=a+b+c;
    ans=max(ans,(a*b*c));
     ans=max(ans,(a+b)*c);
      ans=max(ans,a*(b+c));
       ans=max(ans,a+(a*b));
        ans=max(ans,(a*b)+c);
        cout<<ans<<endl;
        //not clr conpt
}

return 0;
}
