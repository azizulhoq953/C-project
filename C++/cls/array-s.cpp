// #include <iostream>
// #include <string>

// using namespace std;
// int main() {
//    int *array, size;
//   //  array= new int [size];
//    cout<<"Enter size of array: "<<endl;
//    cin>>size;
//    array = new int [size];
//    cout<<"Enter array elements: "<<endl;

//    for (int i = 0; i < size; i++)
//    cin>>array[i];
//    cout<<"The array elements are: ";

//    for(int i = 0; i < size; i++)
//    cout<<array[i]<<" ";
//    cout<<endl;
//   cout<<"Memory Address of:"<< &array<<"\n";
//    return 0;
// }


// #include <iostream>
// using namespace std;


// int main ()
// {
// int n;

// int Array[20]= {16, 2, 77, 40, 30,40,60,22,34,36,38,11,12,34,56,78,16,17,18,19};
// // for(int i=0; i<n; ++i){
  
// // }


// for (int i=0; i<20; ++i){
//   cout<< "Array["<< i <<"]=" << Array[i]<<" "<<endl;
// }
 
//   return 0;


/*
//string type

string Cars [20] = {"Toyoto","Lambergini","Marcedes","Organizations:","XYZ"};
for(int i=0; i<5; i++)
  cout << Cars[i] <<"\n";
  return 0;
  */

//}

#include<iostream>
using namespace std;

int main(){

  int n1=0,n2=1,n3,i,number;
  cout<<"Enter The Number Of Element:";
  cin>>number;
  cout<<n1<<" "<<n2<<" ";
  
  for(i=2; i<number; ++i){
    n3=n1+n2;
    cout<<n3<<" ";
    n1=n2;
    n2=n3;
  }
  return 0;

}