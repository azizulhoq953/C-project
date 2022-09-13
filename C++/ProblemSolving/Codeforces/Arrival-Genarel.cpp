#include<iostream>

using namespace std;

int main(){

int num1,num2;
cin>>num1>>num2;

int mina(num2), maxa(num2),mini(0), maxi(0);

for(int i=1; i<num1; ++i){

    cin>>num2;
    if(num2> maxa){
        maxa = num2;
        maxi = i;
    }
    if(num2<=mina){
        mina = num2;
        mini = i;
    }
}

int cal = maxi+(num1 - 1 -mini) - (mini<maxi ? 1 : 0);

cout<<cal<<endl;

return 0;

}

