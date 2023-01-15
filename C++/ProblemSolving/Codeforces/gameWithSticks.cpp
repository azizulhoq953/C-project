#include<iostream>
using namespace std;


int main(){
    int a,b;
    cin>>a>>b;
    int i=1;
    int count=0;
    for(;;){
     if(a-i==0) break;
     if (b-i==0) break;
     i++;
     count++;
     
    }
    if (count%2==0)
    {
       cout<<"Akshat";
    }else
    cout<<"Malvika";
    
}