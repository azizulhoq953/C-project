#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int x[a], y[a],count=0;
    for(int i=0;i<a;i++){
        cin>>x[i];
        cin>>y[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
          if (x[i]==y[j])
          {
            count++;
          }
          
        }
        //   cout<<count; 
    }
   cout<<count<<endl; 
}