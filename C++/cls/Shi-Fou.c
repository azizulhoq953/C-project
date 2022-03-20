
#include<iostream>
using namespace std;

int main(){

  int array[3][5]={{10,20,30,33,35},
                    {11,21,31,34,36},
                    {12,22,32,37,38}};
      for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){

          // cout<<"Array["<<i<<"]="<<array[j]<<" ";
          // cout<<"Array["<<j<<"]="<<array[i][j]<<" ";
         cout << "Element at array[" << i << "][" << j << "]: ";
            cout << array[i][j]<<endl;
        }
      }

return 0;
}
