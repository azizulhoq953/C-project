/*#include<stdio.h>
#include<stdbool.h>
int main(){

int x;
printf("Enter Your Number:");
scanf("%d",&x);

if(x%2==0){
    printf("Number Is Even");
}else
printf("Number Is Odd");

return 0;
}
*/




#include <iostream>
#include <string>
using namespace std;

int main() {
//string name;
string name;
cout<<"Enter Any Name:";
cin>>name;

cout<<"\n\nYour Name Is:"<<name;
cout<<"\nData Type Size= "<<sizeof(name)<<"byte";
cout<<"\nLength Of= "<<name.length();

  return 0;
}




