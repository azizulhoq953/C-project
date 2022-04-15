#include<iostream>
#include<algorithm>
using namespace std;


void show(int a[],int arraysize)
{
for (int i=0;i<arraysize;i++)
cout<<a[i]<<endl;


}

int main(){

int a[]={1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
int asize =sizeof(a) / sizeof(a[0]);
cout<<"\nthe array Is: \n";
show(a,asize);

cout<<"we first sort The array"<<endl;

sort(a, a+asize);
cout<<"\n\n array after sorting is: \n";

show(a,asize);
cout<<"enter Your Serach Element:\n";
int n;
cin>>n;
cout<<"\n\nNow  we do the binary search";
if (binary_search(a, a+10,n))
cout<<"\n element found in the array:"<<"\nYour Element Of:"<<a[n]<<endl;
else
cout<<"\nElement Not Found In the Array\n\n";

/*cout<<"\n\nNow  we do the binary search for 10";
if (binary_search(a, a+10,10))
cout<<"\n element found in the array:";
else
cout<<"\nElement Not Found In the Array\n\n";
*/
return 0;
}
