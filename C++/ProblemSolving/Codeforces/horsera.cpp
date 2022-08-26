#include<iostream>
#include<algorithm>
using namespace std;
int hrs[5],h=3;
int main(){
for (int i=0;i<4;i++){
    cin>>hrs[i];
}
sort(hrs, hrs + 4);
for (int i=0; i<3; i++){
    if (hrs[i] != hrs[i+1]){
        h--;
    }
}
cout<< h;

}
