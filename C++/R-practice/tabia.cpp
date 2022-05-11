
#include<iostream>
//#include<conio.h>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class contact{
private:
    char fname[30], lname[30];
    long long phno;

public:
    void createContact()
    {
        cout<<"First Name: ";
        cin>>fname;
        cout<<"Last Name: ";
        cin>>lname;
        cout<<"Phone No: ";
        cin>>phno;
    }

    void showContact()
    {
        cout<<"Name: "<<fname<<" "<<lname<<endl;
        cout<<"Phone no: "<<phno<<endl;
    }

    void writeOnFile()

    {
        char ch;
        ofstream f1;
        f1.open("Phonebook.dat", ios::binary | ios::app);

        do
        {
            createContact();
            f1.write(reinterpret_cast<char*>(this), sizeof(*this));
            cout<<"Want to save another contact?(y/n)";
            cin>>ch;
        }while(ch=='y');

        cout<<"Contact has been crested successfully....";
        f1.close();
    }

    void readFromFile()
    {
        ifstream f2;
        f2.open("Phonebook.dat", ios::binary);

        cout<<"\n\n=======================\n";
        cout<<"List Of Contacts";
        cout<<"\n=======================\n";

        while(!f2.eof())
        {
            if(f2.read(reinterpret_cast<char*>(this), sizeof(*this))) //convert this is char* type
                                                                                                                            // https://www.freecodecamp.org/news/ascii-table-hex-to-ascii-value-character-code-chart-2/
            {
               showContact();
               cout<<"\n\n=======================\n";
            }
        }
        f2.close();
    }

    void searchOnFile()
    {
        ifstream f3;
        long long phone;
        cout<<"Enter Phone Number: ";
        cin>>phone;
        f3.open("Phonebook.dat", ios::binary);
        while(!f3.eof())
        {
            if(f3.read(reinterpret_cast<char*>(this), sizeof(*this)))
            {
                if(phone==phno)
                {
                    showContact();
                    return;
                }
            }
        }
        cout<<"\n\n No Record Found";
        f3.close();
    }

    void deleteFromFile()
    {
        long long phone;
        int flag=0;
        ofstream f4;
        ifstream f5;

        f5.open("Phonebook.dat", ios::binary);
        f4.open("temp.dat", ios::binary);

        cout<<"Enter phone number to delete: ";
        cin>>phone;

        while(!f5.eof())
        {
            if(f5.read(reinterpret_cast<char*>(this), sizeof(*this)))
            {
                if(phno!=phone)
                {
                    f4.write(reinterpret_cast<char*>(this), sizeof(*this));
                }
                else flag=1;
            }
        }
        f5.close();
        f4.close();
        remove("Phonebook.dat");
        rename("temp.dat", "Phonebook.dat");

        flag==1?
        cout<<"\tContact Deleted....":
            cout<<"\tContact Not Found....";
    }

    void editContact()
    {
        long long phone;
        fstream f6;

        cout<<"EDIT CONTACT";
        cout<<"\n===========================\n";
        cout<<"Enter the phone number to edit: ";
        cin>>phone;

        f6.open("Phonebook.dat", ios::binary|ios::out|ios::in);
        while(!f6.eof())
        {
            if(f6.read(reinterpret_cast<char*>(this), sizeof(*this)))
            {
                if(phone==phno)
                {
                    cout<<"Enter new record\n";
                    createContact();

                    int pos = -1*sizeof(*this);
                    f6.seekp(pos, ios::cur);
                    f6.write(reinterpret_cast<char*>(this), sizeof(*this));
                    cout<<endl<<endl<<"\tContact is updated successfully...";
                    return;
                }
            }
        }
        cout<<"\n\nNo Record Found";
        f6.close();
    }
};

int main()
{
    system("cls");
    system("Color 3F");
    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t WELCOME TO THE PHONEBOOK MANAGEMENT SYSTEM\n\n\n";
    getchar();

    while(1)
    {
        contact c1;
        int choice;
        system("cls");
        cout<<"\nPHONEBOOK MANAGEMENT SYSTEM";
        cout<<"\n\nMain Menu \n\n";
        cout<<"\n=============================\n";
        cout<<"[1] Add a new contact\n";
        cout<<"[2] List of all contacts\n";
        cout<<"[3] Search for contact\n";
        cout<<"[4] Delete a contact\n";
        cout<<"[5] Edit a contact\n";
        cout<<"[0] Exit";
        cout<<"\n=============================\n";
        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            system("cls");
            c1.writeOnFile();
            break;

        case 2:
            system("cls");
            c1.readFromFile();
            break;

        case 3:
            system("cls");
            c1.searchOnFile();
            break;

        case 4:
            system("cls");
            c1.deleteFromFile();
            break;

        case 5:
            system("cls");
            c1.editContact();
            break;

        case 0:
            system("cls");
            cout<<"\n\n\n\t\t * THANK YOU *"<<endl<<endl;
            exit(0);
            break;

        default:
            continue;

        }

        int opt;
        cout<<"\n\n..:: Enter the Choice: \n[1] Main Menu\t\t[0] Exit\n";
        cin>>opt;

        switch(opt)
        {
        case 0:
            system("cls");
            cout<<"\n\n\n\t\t * THANK YOU *"<<endl<<endl;
            exit(0);
            break;

        default:
            continue;
        }
    }
    return 0;
};
