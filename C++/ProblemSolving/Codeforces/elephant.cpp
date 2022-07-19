#include<iostream>
using namespace std;

int main(){
int n,mov;

cin>>n;

mov = n / 5;

if(n % 5 > 0){
    mov++;
}
cout<<mov;

return 0;
}
