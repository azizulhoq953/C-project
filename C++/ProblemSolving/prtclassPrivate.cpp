
#include<iostream>
using namespace std;


class student{
private:

int Id;


public:

int setId(int x){
Id=x;
};

int getId(){

return Id;
}





};

int main(){

student obj;

obj.setId(21);
cout<<obj.getId()<<endl;

}
