#include<iostream>
#include<cstring>
using namespace std;

int main(){

string charr;
cin>>charr;
int countup=00,countlow=0;
for(int i=0; i<charr.size();i++){
    if(isupper(charr[i])){
        countup++;
    }else {
    countlow++;
    }
}
if(countup>countlow){
    char ch;
    for(int i=0;i<charr.size();i++){
        ch=toupper(charr[i]);
        cout<<ch;
    }
}else{
char ch;
for(int i=0;i<charr.size();i++){
    ch=tolower(charr[i]);
    cout<<ch;
}
}
return 0;
}
