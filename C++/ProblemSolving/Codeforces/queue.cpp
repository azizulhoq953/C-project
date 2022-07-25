#include<iostream>
#include<string>
using namespace std;

int main(){
int n,m;
string s;
cin>>n>>m>>s;
while(m--){
    for (int i=1;i<n; ++i){
        if(s[i] == 'G' && s[i-1]=='B')
        {
            s[i]='B';
            s[i-1]= 'G';
            ++i;
        }
    }
}
cout<< s <<endl;
return 0;
}
