
//class Assignments
#include<iostream>
using namespace std;

int main(){
    //Data Type Declaration
string name;
string product_name;
int product_Id;
double product_price;


cout<<"Enter Your Name:";        //user show information
cin>>name;                        //user input data
cout<<name<<"\n"<<endl;                   //display data

//string data type
cout<<"Enter Your Product_name:";
cin>>product_name;
cout<<product_name<<"\n"<<endl;


// integer data type
cout<<"Enter your product_Id:";
cin>>product_Id;
cout<<product_Id<<"\n"<<endl;

// double data type
cout<<"Enter your product_price:";
cin>>product_price;
cout<<product_price<<"\n"<<endl;


//all data

cout<<"\n\n All output information:"<<"\n\n";
cout<<"Customer_name Is: "<<name<<"\n"<<endl;
cout<<"product_name Is: "<<product_name<<"\n"<<endl;
cout<<"product_Id Is: "<<product_Id<<"\n"<<endl;
cout<<"product_price Is: "<<product_price<<"\n"<<endl;

return 0;
}

