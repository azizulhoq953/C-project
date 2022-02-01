#include<iostream>
using namespace std;

/*
class student{
private:
    string name;

    public:
void set(string nickName){
name=nickName;

}

string get(){
return name;
}

};



int main(){

student s1;
s1.set("azizul");

cout<<"private Access: "<<s1.get();

return 0;
} */

class cars{

private:
    string company;
    string license;
    int id;

public:
    void set(string institute ){
    company=institute;
    }
  string get(){
  return company;
  }

};


int main(){

cars c1;

c1.set("Toyto");



cout<<"private class is: "<<c1.get();
return 0;
};


