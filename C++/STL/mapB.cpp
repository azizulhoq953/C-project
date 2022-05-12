#include<bits/stdc++.h>
using namespace std;



int main(){
map<int, string> Employees;


//insert value using insert function
Employees.insert(std::pair<int, string>(101, "john"));

Employees.insert(std::pair<int, string>(103, "Daenerys"));

Employees.insert(std::pair<int, string>(104, "Arya"));

//insert using array index

Employees[105]="Azizul";
Employees[102]="JahidulIslam";

cout<<"Size Of the Map Is " << Employees.size()<<endl;

//Default Order The Value

cout<<endl<<"Default Order OF Value In Map:"<<endl;

for (map<int, string>::iterator iter = Employees.begin(); iter!=Employees.end(); ++iter){
cout<<(*iter).first <<": "<< (*iter).second <<endl;


};

//corresponding to the key
std::map<int, string>::iterator it = Employees.find(102);
if(it != Employees.end()){

std::cout <<endl<< "Value Of Key = 102 =>" <<Employees.find(102) ->second << '\n';
}



return 0;

}
