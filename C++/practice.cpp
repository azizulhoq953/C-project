#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    char name[20],name2[14],dis[14],upa[14],edu[50];
    int age,phone;
    cout << "Enter Your First name:";
    cin >> name;
    cout << "Enter Your Last Name:";
    cin >> name2;
    cout << "Enter Your Age:";
    cin >>  age;
    cout << "Enter You District:";
    cin >> dis;
    cout<< "Enter Your Upazila:";
    cin >> upa;
    cout << "Enter Your Educational background:";
    cin >> edu;
    cout << "Enter Your Phone Number:";
    cin >> phone;
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "FirstName:"<<name;
    cout << "\n";
    cout << "LastName:"<<name2;
    cout << "\n";
    cout << "Age:"<<age;
    cout << "\n";
    cout << "Distric:"<<dis;
    cout << "\n";
    cout << "Upazila: "<<upa;
    cout << "\n";
    cout << "Educational status:"<<edu;
    cout << "\n";
    cout << "phone:"<<phone;



    //char name[14]="azizul Hoq";
    //cout<< name;
    getch();
}
