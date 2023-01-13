#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, l, l2;
    // float l3;

    cin >> n >> l;
    int p[n];

    for (int i = 0; i < n; i++)
        cin >> p[i];

    sort(p, p + n);
    l2 = max(p[0], l - p[n - 1])*2;

    for (int i = 0; i < n - 1; i++)
        l2 = max(l2, p[i + 1] - p[i]);
   
 
     printf("%.10f\n", l2 / 2.0);
    //  cout.precision(11);
    // cout << fixed << l2 / 2.0 << endl;


    return 0;
}