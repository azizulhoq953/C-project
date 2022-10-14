#include <iostream>
using namespace std;

int main() {

int L;
cin>>L;

while(L--){

	int m,n;
	cin>>m>>n;

	if(m%n==0)
	{
	cout<<0<<endl;
	}
	else {

	int x=m%n;

	cout<<n-x<<endl;

	}
}


	return 0;
}
