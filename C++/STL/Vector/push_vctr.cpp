//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>vec;
int i;
cout<<"Vector Size"<<vec.size()<<endl;

for(i=0;i<5;i++){

vec.push_back(i);

}

cout<<"Extended Size Of Vector: "<<vec.size()<<endl;

for(i=0;i<5;i++){

cout<<"Value Of Vector ["<< i <<"] = "<<endl;
}


//use iterator Access The value


vector<int>::iterator V=vec.begin();

while( V != vec.end() ){
cout<<"Value Of V = "<< *V <<endl;
V++;
}
getchar();
}
