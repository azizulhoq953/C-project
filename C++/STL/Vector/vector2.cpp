#include<bits/stdc++.h>
//#include<iostream>
//#include<vector>
using namespace std;

void print(vector<int>data){
cout<<"Total Element: "<< data.size() <<"\n";
for(int datam:data)
cout<<datam <<" ";
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector<int> data({1,3,5,6,7,8});
data.push_back(10);
//data.insert(data.end() -2 ,0);
data.insert(data.begin() +2,7)
print(data);

//arr.push(5);

return 0;
}
