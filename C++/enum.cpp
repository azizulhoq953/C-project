#include <iostream>
using namespace std;
enum colors{red=5, black};
enum suit{heart, diamond=8,khata=1, spade=3, club,seminar};
int main() {
   cout <<"The value of enum color : "<<red<<","<<black;
   cout <<"\nThe default value of enum suit : "<<heart<<","<<diamond<<","<<","<<khata<<spade<<","<<club<<","<<seminar;
   return 0;
}
