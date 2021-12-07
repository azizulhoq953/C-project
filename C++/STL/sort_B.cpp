#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[6]={10,5,6,9,7};

cout<<"before\n";

for (int i=0; i<5; i++){
    cout << arr[i]<<" ";

}
cout <<"\n\n";

sort(arr, arr+5);
cout<<"After\n";
for (int i=0; i<5; i++){
    cout << arr[i]<<" ";

}
}

