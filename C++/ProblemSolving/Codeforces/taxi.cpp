#include<iostream>

using namespace std;

int main()
{
    int a,num1 = 0,num2 = 0,num3 = 0,num4 = 0,min_t = 0;
    cin >> a;
    int B[a];
    for(int i = 0; i < a; i++)
    {
        cin >> B[i];
        if(B[i] == 1)
        {
            num1++;
        }
        if(B[i] == 2)
        {
            num2++;
        }
        if(B[i] == 3)
        {
            num3++;
        }
        if(B[i] == 4)
        {
            num4++;
        }
    }
    min_t = num4;
    while(num1!=0 && num3!=0)
    {
        num3 = num3 - 1;
        num1 = num1 - 1;
        min_t = min_t + 1;
    }
    if(num1==0 && num3!=0)
    {
        min_t = min_t + num3;
        num3 = 0;
    }
    min_t = min_t + num2 / 2;
    if(num2%2 != 0)
    {
        if(num1 <= 2)
        {
           min_t = min_t + 1;
           num2 = 0;
           num1 = 0;
        }
        else
        {
            num1 = num1 - 2;
            min_t = min_t + 1;
            num2 = 0;
        }
    }
    if(num1 != 0)
    {
        min_t = min_t + num1 / 4;
        if(num1%4 != 0)
        {
            min_t = min_t + 1;
        }
    }
    cout << min_t;
}
