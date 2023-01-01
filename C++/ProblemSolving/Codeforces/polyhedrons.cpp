
#include<bits/stdc++.h>
using namespace std;

int main(){
int n,add;
string sin;
while(cin>>n){
   int sum=0;
    while (n--)
    {
        cin>>sin;
        if(sin== "Tetrahedron")
        sum += 4;
        else if (sin== "Cube")
        sum +=6;
        else if(sin == "Octahedron")
        sum +=8;
        else if ( sin == "Dodecahedron")
        sum+=12;
        else if (sin == "Icosahedron")
        sum+=20;
        else if (sin == "Cal")
        sum+=40;
        
    }
    

   cout<<sum<<endl;
 
}
  return 0;
}
