#include<iostream>

using namespace std;

class sample
{
    public:
      int a=10,b=20;

      sample(int a, int b)
      {
          cout<<a+b;
      }
      sample()
      {
          cout<<default 2nd constructor;
      }

      int sum(int a, int b)
      {
          return a+b;
      }


};

int main()
{
    sample oj;
    cout<<oj.sum(10,10);


    return 0;
}
