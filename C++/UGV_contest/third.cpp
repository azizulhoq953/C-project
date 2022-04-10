
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>>N;
    if (N<=20|| N!=2){
    cout<<"Every sad person is poetry"<<endl;
    }
    else if(N<20|| N % 20 == 2){
    cout<<"Grow up, you will have more problems"<<endl;
    }else if(N>=20||N==20||N!=0){
    cout<<"Life is beautiful"<<endl;
    }
    return 0;
}
