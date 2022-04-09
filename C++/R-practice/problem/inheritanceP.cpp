#include<iostream>
using namespace std;
class bs
{
public:
    int studentId1;
    virtual void name(){
    cout<<"studentId1: "<<studentId1<<endl;
    };
};

class A:public bs
{
public:
    int studentId2;
    virtual void name0(){
    cout<<"studentId2: "<<studentId2<<endl;
    name();
    };
};


class B:public bs
{
public:
    int studentId3;
    virtual void name1(){
    cout<<"studentId3: "<<studentId3<<endl;
    };
};

class D:public B
{
public:
    int studentId14;
    virtual void name2(){
    cout<<"FourthId: "<<studentId14<<endl;
    name1();

    };
};


class C:public A,public B,public D
{
public:
int studentId5;
cout<<"studentId5:"<<studentId5<<endl;

name2();
};



int main(){

C allInfo;
allInfo.studentId1=12021001;
allInfo.studentId2=12021002;
allInfo.studentId3=12021003;
allInfo.studentId4=12021004;
allInfo.studentId5=12021005;
allInfo.C();

getc();
}
