#include <iostream>
#include <cmath>
using namespace std;

bool isValidTriangle(double side1, double side2, double side3)
{
	// The sum of any two sides of a triangle must be greater than the third side
	if( (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1) )
	{
		return true;
	}
	else
	{
		return false;
	}
}

double getPerimeter(double side1, double side2, double side3)
{
	double result;
	// Sum the 3 sides of the triangle
	result = ( side1 + side2 + side3 );

	return result;
}

double getArea(double side1, double side2, double side3)
{
	double result;

	// Use Heron's formula to calculate the area
	result = ( (.25) * sqrt( (side1 + side2 + side3) * (side2 + side3 - side1) * (side1 - side2 + side3) * (side1 + side2 - side3) ) );

	return result;
}



int main()
{
	double side1;
	double side2;
	double side3;
	double perimeter;
	double area;

	// Prompt the user to enter 3 (possibly float) numbers, and set their responses to variables
	cout << "Enter the dimensions of the triangle:" << endl;
	cout << "Side-1: ";
	cin >> side1;
	cout << "Side-2: ";
	cin >> side2;
	cout << "Side-3: ";
	cin >> side3;

	// Check to see if these 3 sides would form a valid triangle
	if( isValidTriangle(side1, side2, side3) )
	{
		// Is a valid triangle, so prepare the perimeter and area
		perimeter = getPerimeter(side1, side2, side3);
		area      = getArea(side1, side2, side3);
		// Print response
		cout << "This triangle's area is " << area << " square-units, and its perimeter is " << perimeter << " units." << endl;

	}
	else
	{
		// Not a valid triangle, so print response and end program
		cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;

	}

	return 0;
}