  #include <iostream> 
#include <iomanip>      
                
using namespace std;

int main()
{
	int choice;
	double radius,pi,length,width,base,height;
	
	pi=3.14159;
	do
	{
		cout<<"1. Calculate the Area of a Circle";
		cout<<"2. Calculate the Area of a Rectangle";
		cout<<"3. Calculate the Area of a Triangle";
		cout<<"quit";
		cout<<"Enter 1,2,3, or 4: ";
		cin<<choice;
		
	while(choice>4 || choice<1)
	{
		cout<<"Please enter a valid choice";
		cin<<choice;
	}
	while(choice<=4 && choice>=1)
	{
		switch(choice)
		{
			case 1: cout<<"what is the radius of the circle?";
			cin>>radius;
			area=pi*pow(radius, 2.00)
			cout<<"The area of the circle is "<<area;
			case 2: cout<<"what is the length of the rectangle? ";
			cin>>length;
			cout<<"what is the width of the rectangle? ";
			cin>>width;
			area=length*width;
			cout<<"The area of the rectangle is "<<area;
			case 3: cout<<"What is the length of the triangle's b-ase? ";
			cin<<base;
			cout<<"What is the height of the triangle? ";
			cin<<height;
			area=(1/2)*base*height;
			cout<<"The area of the triangle is "<<area;
			case 4: cout<<"goodbye";
		}
	}	
	}
	
	return 0;
}