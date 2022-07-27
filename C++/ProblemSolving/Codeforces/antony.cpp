#include <iostream>
using namespace std;

int main ()
{
    int m,i,a,d;
    char ch;

    while (cin >> m)
    {
        a = 0;
        d = 0;

        for (i=1; i<=m; i++)
        {
            cin >> ch;

            if (ch == 'A')
                a = a + 1;
            else
                d = d + 1;
        }

        if (a > d)
            cout << "Anton" << endl;
        else if (d > a)
            cout << "Danik" << endl;
        else
            cout << "Friendship" << endl;
    }

    return 0;
}
