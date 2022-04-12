//encapsulation is multiple object and multiple function define system
#include<iostream>
using namespace std;
//#include<bits/stdc++.h>

class student{
private:  //private method is direct no access any function
string name;

public:
void setname(string x){

name=x;          //private method access with set and get function method
}

string getname(){
return name;
}

};



int main(){
student stdnt;
stdnt.setname("azizul");
cout<<stdnt.getname();

getchar();
}
