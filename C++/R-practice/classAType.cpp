/* Class Are Three Types Public Private Protected


#include<iostream>

using namespace std;

class access{

int height;
int width;

public:
void set(int h, int w);
int area();


};

int access::area(){

return height*width;

}

void access::set(int h, int w){
height=h;
width=w;

}


int main(){

access rect;
rect.set(10,20);
cout<<"Area Of= "<<rect.area()<<endl;

getchar();
}
