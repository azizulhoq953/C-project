#include<iostream>
using namespace std;

string a, s="hello";
int j=0, pas=0;
int main(){
cin>>a;
for(int i=0;i<a.size();i++){
    if(a[i]==s[j]){
        j++;
        pas++;
        if(pas == 5){
            break;
        }
    }
}
if (pas == 5){
    cout<<"YES"<<endl;
} else{
cout<<"NO"<<endl;
}
return 0;
}
