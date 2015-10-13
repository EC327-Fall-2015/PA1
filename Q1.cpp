#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	double side1;
	double side2;
	double side3;
	double area;
	double perimeter;
	double p_half;
	
	cout<<"Enter the dimensions of the triangle: "<<endl;
	cin>>side1>>side2>>side3;

	if (side1 > 0 && side2 > 0 && side3 > 0)  //ensures each side of the triangle is positive
	{
		if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2))  //ensures the sides are in accordance with the priciples of a triangle
		{
		 //half the perimeter, s in heron's formula 
		perimeter = side1 + side2 + side3;
		p_half = perimeter / 2.0; //perimeter of triangle 
		area = sqrt((p_half*(p_half-side1)*(p_half-side2)*(p_half-side3))); //heron's formula for area
		cout<<"The triangle's area is "<<area<<" square-untis and its perimeter is "<<perimeter<<" units."<<endl;
		}

		else
		{
		cout<<"Dimensions "<<side1<<", "<<side2<<", "<<side3<<" do not form a triangle."<<endl; //in case the dimensions do not form a triangle.
		}
	}

	else
	{
		cout<<"Dimensions "<<side1<<", "<<side2<<", "<<side3<<" do not form a triangle."<<endl; //in case one of the sides is a negative
	}


	return 0;
	
}