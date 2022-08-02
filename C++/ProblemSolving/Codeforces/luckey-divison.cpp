#include<iostream>
using namespace std;

int main(){
int Luckey;
cin>>Luckey;

if(Luckey%4==0 || Luckey%7==0 || Luckey%44==0 || Luckey%47==0 || Luckey%74==0 || Luckey%77==0 || Luckey%444==0 || Luckey%447==0 || Luckey%474==0 || Luckey%477==0 || Luckey%447==0 || Luckey%774==0 || Luckey%777==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO";
}

return 0;
}
