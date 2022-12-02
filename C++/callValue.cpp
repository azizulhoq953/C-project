//call by refarence you must basic concept of pointer is mandetory


#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}

int main(){
    int x,y;
    cout<<"Enter any Number Of Assign X variable:";
    cin>>x;
    cout<<"Enter any Number of Assign Y variable:";
    cin>>y;

swap(&x,&y); //pass value to the swap function
cout<<"Value Of X is:"<<x<<endl;
cout<<"Value Y is:"<<y<<endl;
return 0;
}


/*
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
*/
