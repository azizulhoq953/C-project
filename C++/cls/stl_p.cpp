#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{

//vector create
vector<int> vec;
int i;

//sizeof vector
cout<<"Vector size:"<<vec.size()<<endl;

//push value
for (i=0;i<5;i++){
    vec.push_back(i);
}
//display vector extended size
cout<<"vector extended size:"<<vec.size()<<endl;


//values

for (i=0;i<5;i++){
    cout<<"value of Vector:["<<i <<"]="<<vec[i]<<endl;
}

//use iterator to access value
vector<int>::iterator v = vec.begin();
while(v !=vec.end()){
    cout<<"Value of V="<<*v<<endl;
    v++;
}

return 0;
}
