#include<iostream>
using namespace std;

int main(){
string n;
cin>>n;
int flag=0;
for (int i=0; i<n.size();i++){
    if(n[i]>=33&&n[i]<=126){
        if(n[i]=='H' || n[i]=='Q' || n[i]=='9')
            flag=1;

    }
}
if(flag){
    cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;
}
return 0;

}
