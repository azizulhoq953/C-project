#include<iostream>
using namespace std;
int adj[100][100];


int main(){
freopen("io.txt", "r", stdin);
int node,edge;
cin>>node>>edge;
int row,col;
for(int i=0;i<edge;i++){
cin>>row>>col;
adj[row][col]=1;
adj[col][row]=1;

}
for(int i=0;i<node;i++){
if(adj[4][i]==1){
cout<<"Adjacent Node Of "<< i<<"\n";

}

}
cout<<"\n";

for(int i=0;i<node;i++){
for(int j=0;j<node;j++){
cout<<"\t"<<adj[i][j];

}
cout<<"\n";

//if(adj[0][i]==1){
//cout<<i<<endl;
}
return 0;
}



