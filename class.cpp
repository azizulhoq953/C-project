#include <iostream>
using namespace std;
class Student {
   public:
      int id;
      string name;
      string Institute;
};

int main() {
    cout<<"This Programme is Object Method"<<"\n";
    Student s1; //creating an object of Student
    s1.id = 12021002;
    s1.name = "Md.Azizul Hoq";
    s1.Institute="University Of Global Village";
    cout<<s1.id<<endl;
    cout<<s1.name<<endl;
    cout<<s1.Institute<<endl;
    return 0;
}
