#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> database;
    string str;
    while (n--)
    {
        cin >> str;
        if (database.count(str) == 0)
        {
            cout << "OK" << endl;
            database[str] = 1;
        }
        else
        {
            cout << str << database[str] << endl;
            database[str] += 1;
        }
    }
    return 0;
}