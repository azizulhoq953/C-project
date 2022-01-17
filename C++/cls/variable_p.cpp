#include<iostream>
using namespace std;
//int G;
class factory{
    public:
string name; //factoryName
string product;
double accounts;
string license; //license Id


};

int main(){
factory myFact; //create an object of Factory
myFact.name="Azizul";

myFact.product="SmartPhone,Computer,Electrical_Device";

myFact.accounts=545000;

myFact.license="A1R56K39";

cout<<myFact.name<<"\n"<<myFact.product<<"\n"<<myFact.accounts<<"\n"<<myFact.license;
return 0;
}

/*int main(){
int a,b;

a=20;
b=30;
G=a*b;
cout<<G;


return 0;
}
*/


