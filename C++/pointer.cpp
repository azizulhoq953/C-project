#include <iostream>
using namespace std;
int main()

{
  int a, b,c;
  cout<<"enter Value Of A:";
  cin>>a;
  cout<<"Enter Value Of B:";
  cin>>b;
  cout<<"Enter Value Of C:";
  cin>>c;
  int *ptrA=&b;
  int *ptrB=&a;
  void *ptr = &a;


  //cout << "Value of ptrA is " << *ptrA << " sored in address "<< ptrA<<"\n";
 // cout << "Value of ptrB is " << *ptrB <<" sored in address "<< ptrB<<"\n";

  cout<<"Your Value Of ptrA is " << *ptrA<<"\n" << "sorted Address ptrA "<< ptrA<<"\n";
  cout<<"your Value Of ptrB is " << *ptrB<<"\n" <<" sorted Address ptrB "<< ptrB<<"\n";
  //cout<<"Your C value:"<<*ptr;
  return 0;
}

/*{
  void *ptr; // void pointer declaration
  int *ptr1; // integer pointer declaration
  int data=10; // integer variable initialization
  ptr=&data;  // storing the address of data variable in void pointer variable
  ptr1=(int *)ptr; // assigning void pointer to integer pointer
  std::cout << "The value of *ptr1 is : " <<*ptr1<< std::endl;
  return 0;
}*/
