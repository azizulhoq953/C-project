/*#include <iostream>
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
  void *ptrC = &c;


  //cout << "Value of ptrA is " << *ptrA << " sored in address "<< ptrA<<"\n";
 // cout << "Value of ptrB is " << *ptrB <<" sored in address "<< ptrB<<"\n";

  cout<<"Your Value Of ptrA is " << *ptrA<<"\n" << "sorted Address ptrrc "<< ptrC<<"\n";
  cout<<"your Value Of ptrB is " << *ptrB<<"\n" <<" sorted Address ptrB "<< ptrB<<"\n";
  //cout<<"Your C value:"<<*ptr;
  return 0;
}
*/
#include<iostream>
using namespace std;

int main(){
string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

*ptr= "Banana";
// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";
return 0;

}
