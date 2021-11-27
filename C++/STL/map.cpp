#include<stdio.h>
#include<iostream>
#include<map>
#include<iterator>


using namespace std;


int main(){
map<string, int>m;
map<string,int>::iterator it;

m["Azizul"]=44;
m["arnob"]=43;
m["abid"]=50;

m.insert(make_pair("Asif",33));

for (it = m.begin(); it != m.end(); ++it){
    cout << it->first <<" "<< it->second <<endl;
}

//printf("%d",m["Azizul"]);


}
