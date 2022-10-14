#include<iostream>
#include<math.h>
using namespace std;
int main()
{
      int long long  x,y,rafa,beto,carl,test,i;
cin>>test;
      while(test--){

            for(i=1;i<=test;i++){
                  cin>>x>>y;

                  rafa=pow((3*x),2)+pow(y,2);
                  beto=2*pow(x,2)+pow((5*y),2);
                  carl=-100*x+(pow(y,3));

                        if(rafa>beto && rafa>carl)
                        cout<<"Rafael ganhou"<<endl;
                        else if(beto>rafa && beto>carl)
                     cout<<"Beto ganhou"<<endl;
                        else
                      cout<<"Carlos ganhou"<<endl;
            }
      }

}
