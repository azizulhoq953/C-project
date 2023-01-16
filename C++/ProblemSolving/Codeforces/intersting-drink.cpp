#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int main(){
    int n;
    // long long length = [100000];
    cin>>n;
   
    vector<int> v(n);
    vector<int> f(MAX);
    vector<int> pf(MAX);
    for(int i=0; i<n; i++){
        cin>> v[i];
        f[v[i]]++;
    }
    pf[0]=0;
    for (int i = 0; i <=MAX; i++)
    {
        pf[i]=pf[i-1]+f[i];

    }

    int q;
    cin>> q;
    while(q--){
        int x;
        cin>>x;
        if(x>MAX){
            cout<<n<<endl;
        }else{
            cout<< pf[x]<<endl;
        }
    }
    
return 0;

}
