
#include<bits/stdc++.h>
#define lng              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();

    //freopen("input.txt","r", stdin);

    lng n;
    string x1,t;
    cin>>x1;
    n = x1.length();
    transform(x1.begin(),x1.end(),x1.begin(), ::tolower);

    for(lng i=0; i<n; i++){
        if(x1[i] == 'a' || x1[i] == 'e' || x1[i] == 'i' || x1[i] == 'o' || x1[i] == 'u' || x1[i] == 'y')
            continue;
        else{
            t += '.';
            t += x1[i];
        }
    }
    cout<<t<<endl;

    return 0;
}

