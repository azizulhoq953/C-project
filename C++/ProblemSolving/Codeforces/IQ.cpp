#include<iostream>
using namespace std;

int main(){
    int num, x,even(0), lastodd(0),lasteven(0);
    cin >>num;
    for (int  i = 1; i <=num; ++i)
    {
        /* code */
        cin>> x;
        if (x % 2 == 0)
        {
            /* code */
            even +=1;
            lasteven = i;
        }
        else{
            even -=1;
            lastodd = i;
        }
        
    }
    cout << (even > 0 ? lastodd : lasteven)<<endl;
    
    return 0;
}