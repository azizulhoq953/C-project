#include <iostream>
#include <string>
using namespace std;
int main(){

int myNum;               // Integer (whole number)
float myFloatNum;     // Floating point number
double myDoubleNum;   // Floating point number
char myLetter;         // Character
bool myBoolean;       // Boolean
string myString;
int sum;

cout <<"Enter Any Integer Number:";    // String
cin>>myNum;

cout <<"Enter Any Float Number:";
cin>>myFloatNum;

cout <<"Enter Any DoubleNumber:";
cin>>myDoubleNum;

cout <<"Enter Any Character:";
cin >>myLetter;

cout <<"Enter Any Boolean:";
cin>>myBoolean;

cout <<"Enter Any String:";
cin>>myString;

cout<< "int:"<< myNum << "\n";

cout<< "float:"<< myFloatNum<< "\n";

cout<< "Char:"<< myLetter<< "\n";
cout<< "double:"<<myDoubleNum<<"\n";

cout<< "bool:"<< myBoolean<< "\n";

cout<< "string:"<< myString<< "\n";

return 0;
}
