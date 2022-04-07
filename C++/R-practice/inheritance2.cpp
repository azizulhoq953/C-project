#include<iostream>

using namespace std;


class person{
public:
string name;
string house;
int road;

void infoDisplay(){

cout<<"Name Is: "<<name<<endl;

cout<<"House Is: "<<house<<endl;
cout<<"Road Is: "<<road<<endl;

}

};

class studen : public person{
public:
int sID;
void infoDisplay2(){
cout<<"Student Id Is: "<<sID<<endl;
infoDisplay();
}

};



int main(){

studen sinfo;
cout<<"Enter Your Name: ";
cin>>sinfo.name;

cout<<"Enter Your House: ";
cin>>sinfo.house;

cout<<"Enter Your House Road: ";
cin>>sinfo.road;

cout<<"Enter Your Student ID: ";
cin>>sinfo.sID;

cout<<"Your Input Information \n";
sinfo.infoDisplay2();
getchar();
}
