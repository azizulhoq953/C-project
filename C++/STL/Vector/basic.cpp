#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>vec={10,20,30,40,12};

vector<int> :: iterator it;

for(it=vec.begin();it!=vec.end();it++){
    if(*it==25){
    vec.push_back(55);
    }

};
vec.push_back(43);

for(it=vec.begin();it!=vec.end();it++){

//printf("%d\n",*it);
cout<<*it<<endl;
}


return 0;

}
