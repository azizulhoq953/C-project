#include<iostream>
using namespace std;

void sum(int x,int y){

int add=x+y;

cout<<add<<endl;

};


void sum(double x,int y){

int add=x+y;

cout<<add<<endl;

};




int main(){

sum(10,20);

sum(50.5,22);

getchar();
}
