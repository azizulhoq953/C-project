#include <iostream>
#include<string>
using namespace std;

string  solve(string s1 ,char c ){
	string s="qwertyuiopasdfghjkl;zxcvbnm,./";
	string ans;
int len=s1.length();
for(int i=0;i<len;i++){
	int index = s.find(s1[i]);
	if(c=='R'){
		ans+=s[index-1];
	
	}
	else{
			ans+=s[index+1];
	}
	
}
return ans;
	
}

int main() {

string s2;
char c;
cin>>c;
cin>>s2;
 cout<<solve(s2,c)<<endl;


	return 0;
}