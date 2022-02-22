#include <iostream>
using namespace std;
int main (){
    int n;
   int arr[n] = { 2, 5, 7, 8, 2, 6, 9 };
   int  sum = 0;
   for(int i = 0; i<n ; i++){
      sum+=arr[i];
   }
   std:cout<<"The array sum is "<<sum<<"\n";
   return 0;
}
