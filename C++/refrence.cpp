#include <iostream>
using namespace std;

int main(){

int a,b,c;
cout<<"Enter A refrence Number:";
cin>>a,

cout<<"enter B refrence Value:";
cin>>b;

cout<<"Enter C Refrence Value:";
cin>>c;

int &valueA=a;
cout<<"value Of a:"<<valueA<<"\n";

int &valueB=b;

cout<<"Value Of b:"<<valueB<<"\n";

int valueC=c;
cout<<"Value Of c:"<<valueC<<"\n";

return 0;
}
