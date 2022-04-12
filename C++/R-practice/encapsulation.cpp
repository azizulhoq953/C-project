//encapsulation is multiple object and multiple function define system
#include<iostream>
using namespace std;
//#include<bits/stdc++.h>

class student{
private:  //private method is direct no access any function
string name;
int id;

public:
void setname(string x){

name=x;          //private method access with set and get function method
}
void setid(int y){
id  =y;
}

string getname(){
return name;
}

int getid(){
return id;
}

};



int main(){
student stdnt;
stdnt.setname("azizul");
stdnt.setid(12021);
cout<<stdnt.getname()<<endl;;
cout<<stdnt.getid()<<endl;

getchar();
}
