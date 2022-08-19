#include<iostream>
#include<string>
using namespace std;


int main(){
string t1,t2;
cin>>t1>>t2;
for( size_t i=0;i<t1.length();++i){
    if(t1[i] == t2[i]){
       t1[i]='0';
    }
    else{
    t1[i]='1';
    }

}
cout<<t1<<endl;

return 0;
}
