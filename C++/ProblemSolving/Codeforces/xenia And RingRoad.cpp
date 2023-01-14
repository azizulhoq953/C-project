#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int array[b];
    for (int i=0; i <b; i++)
    {
        cin>>array[i];
    }
    long long int count = array[0]-1;
    for (int  i = 0; i < b-1; i++)
    {
        if(array[i]>array[i+1]){
            count+=a-(array[i]-array[i+1]);
        }
        else if (array[i]<array[i+1])
        {
            count+=array[i+1]-array[i];
        }
        
    }
    cout<<count<<endl;
    
    return 0;
}