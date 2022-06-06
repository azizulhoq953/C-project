#include <bits/stdc++.h>
using namespace std;

void mainSolve()
{
  int f,s;
  cin >>f>>s;

  if(f<s)
    cout<<"FIRST"<<endl;

  else if(f>s)
    cout<<"SECOND"<<endl;

  else
    cout<<"ANY"<<endl;

}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    mainSolve();
  }
  return 0;
}
