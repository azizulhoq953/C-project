#include<iostream>
using namespace std;


//Base Class

class name{
public:
string name;
int age;

void display1(){
cout<<"Name Is "<<name<<endl;
cout<<"Age Is "<<age<<endl;

}

};

class student: public name{
public:
int Id;

void display2(){
display1();
cout<<"Id Is "<<Id<<endl;

}
};

int main(){
student s1;

s1.name="Azizul";
s1.age=22;
s1.Id=12;
s1.display2();

return 0;
}
