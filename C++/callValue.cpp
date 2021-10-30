//call by Value c++
#include<iostream>
using namespace std;

void change (int data);

int main(){
int data=3;
change(data);
data=6;
data=10;
cout<< "value of the data is:"<< data<<endl;
return 0;
}

void change(int data)
{
    //data =5;
}
