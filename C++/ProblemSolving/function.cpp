#include <iostream>
using namespace std;
int max(int w,int x ,int y ,int z){
    if (w>x && w>y && w>z){
        return w;
    }
    else if (x>w && x>y && x>z){
        return x;
    }
    else if(y>w && y>x && y>z){
        return y;
    }
    else{
        return z;
    }

}
int main() {
    int a, b, c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int ans = max(a,b,c,d);
    cout<<ans;
    return 0;
}
