#include<iostream>
using namespace std;

class student{

public:
int Id;

string name;

void studeninfo(){
cout<<Id<<endl;
cout<<name<<endl;

}

};
class student2 : public student{

public:
string details;

void studentinf2(){

cout<<details<<endl;
studeninfo();
}

};


int main(){
student2 obj;
obj.Id=22;
obj.name="Banana";
obj.details="Xyz";
obj.studentinf2();
getchar();

}

