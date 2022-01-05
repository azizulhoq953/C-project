#include<bits/stdc++.h>
using namespace std;

// binary search

int main(){
int arr[6]={2,5,7,9,10,11};

cout << binary_search(arr, arr+6,7)<<"\n";
cout<< binary_search(arr, arr+6,12)<<"\n";

}



/*int main()
{

int arr[6]={4,1,6,8,4,3}; // array

cout << find (arr, arr+6, 3) -arr <<"\n"; //success case

cout << find(arr, arr+6, 1) -arr<<"\n"; //fail case

return 0;
}*/
