#include<iostream>
using namespace std;



int main(){

int t, people,capacity,n=0;

cin>>t;

while(t--){
    cin>>people>>capacity;
    if(capacity-people>=2)
        n++;


}

    cout<<n<<endl;
    return 0;
}
