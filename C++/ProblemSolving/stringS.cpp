#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    string s;
    cin>>s;
    string num="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=',')
            num+=s[i];
        else
        {
            cout<<num<<endl;
            num="";
        }
    }
    if(num!="")
        cout<<num<<endl;
    return 0;
}

