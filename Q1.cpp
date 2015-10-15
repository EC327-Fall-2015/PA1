#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
//Function prototyping because easier.
double area(double, double, double);
double perimeter(double, double, double);

int main()
{
	//declare some variables for the sides.
	double side1;
	double side2;
	double side3;
	//Ask user for dimensions of triangle
	cout<<"Please enter the dimensions of the triangle:"<<endl<<"Side-1: ";
	cin>>side1;
	cout<<"Side-2: ";
	cin>>side2;
	cout<<"Side-3: ";
	cin>>side3;
	//nested conditionals to check if the given sides actually make a triangle.
	if (side1+side2>side3)
	{
		if (side1+side3>side2)
		{
			if (side2+side3>side1)
			{	
				//reaches here if we confirmed that the sides make a triangle
				double triArea;
				//calls a function to determine the area of the triangle
				triArea= area(side1,side2,side3);
				double triPeri;
				//calls a function to determine the perimeter of the triangle
				triPeri=perimeter(side1,side2,side3);
				//prints what we want out.
				cout<<"This triangle's area is "<<fixed<<setprecision(2)<<triArea<<" square-units and its perimeter is "<<triPeri<<" units."<<endl;
				return 0;
			}
		}	
	}
	// only reaches here if it doesn't sastify conditions to be a triangle.
	cout<<"Dimensions "<<side1<<", "<<side2<<", "<<side3<<" do not form a triangle."<<endl;
	return 0;
	
}
//function determines the area of the triangle given 3 sides using Heron's Formula and semiperimeters.
double area(double sidea, double sideb, double sidec)
{
	double sP=(sidea+sideb+sidec)*0.5;
	double squareRt=sP*(sP-sidea)*(sP-sideb)*(sP-sidec);
	return sqrt(squareRt);
}
//function determines the perimeter of a triangle given 3 sides, just adding them together.
double perimeter(double sidea, double sideb, double sidec)
{
	return sidea+sideb+sidec;
}
