#include<iostream>
//#include <fstream>
using namespace std;

int adj[50][50];


int main(){
freopen("io.txt", "r", stdin); //file include
int edge,node;
//cout<<"Enter Number Of node:"<<endl;
cin>>node;
//cout<<"Enter Number Of edge:"<<endl;
cin>>edge;

int n1,n2;
for(int i=0;i<edge;++i){
cin>>n1>>n2;
adj[n1][n2]=1;
adj[n2][n1]=1;
}

for(int i=0;i<node;i++){
for(int j=0;j<node;++j){
cout<<"\t"<<adj[i][j];
}

cout<<"\n";

}

return 0;

}
