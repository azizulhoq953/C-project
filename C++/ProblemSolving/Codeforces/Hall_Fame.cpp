#include<bits/stdc++.h>
using namespace std;
int main(){

int test;
cin>>test;
while(test --){
    int n;
    string s;
    cin>>n;
    cin>>s;

    int R=0,L=0;
    for(int i=0; i<n; i++){
        if(s[i]=='R'){
            R++;
        }
        else {
            L++;
        }
    }
    if(L==0 || R==0){
        cout<<-1 <<endl;
    }  else{
        int index=0;
        for(int i=0; i<n-1; i++){
            if(s[i]== 'L' && s[i+1]=='R'){
                index=i+1;
                break;
            }
        }
        cout<<index<<endl;
    }  

}

}