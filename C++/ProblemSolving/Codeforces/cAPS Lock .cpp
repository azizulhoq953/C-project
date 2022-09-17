#include <iostream>
using namespace std;

int main()
{
    string s;
    char p;
    bool c = true;
    cin >> s;

    for(int i = 1; i < s.length(); i++)
    {
        if(islower(s[i]))
        {
            c = false;
        }
    }

    if(c == true)
    {
        for(int j = 0; j < s.length(); j++)
        {
            if(islower(s[j]))
                p = toupper(s[j]);
            else
                p = tolower(s[j]);
            cout << p;
        }
    }
    else
        cout << s;
    return 0;
}
