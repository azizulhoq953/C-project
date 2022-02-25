#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;


int main(){
float num1,num2;
cout<<"Enter Any Two Numbers:";
cin>> num1 >> num2;

cout<<fixed;
cout<<setprecision(3);
cout<<showpoint;
float sum = num1 + num2;
cout<<setw(20)<<"sum Is:" <<sum;
cout<<endl;

//cout<<noshowpoint;
float sub=num1-num2;
cout<<setw(20)<<"subtraction is:"<<sub;
cout<<endl;

//cout<<showpoint;
float mult=num1*num2;
cout<<setw(20) << "Multipliction:"<<mult;
cout<<endl;


double  div=num1/num2;
cout<<setw(20) << "Division Is:"<<div;
cout << endl;


}
